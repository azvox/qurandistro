<?php
class MediaFile {

  /** The full path to the media file. */
  public $path = '';

  /** The extension for the media file. */
  public $extension = '';

  /** The mimetype for the media file. */
  public $filemime = '';

  /** The class for this media file. */
  public $class = '';

  /** The type for this media. */
  public $type = '';

  /** The original file object. */
  public $file = null;

  /** The stream for this file. */
  public $stream = '';

  public function __construct($file) {

    // Check to make sure it is set.
    if (!empty($file)) {

      // Standardize the type of the incoming data.
      $file = gettype($file) == 'string' ? array('path' => $file) : $file;
      $file = (object)$file;

      // Set the file object.
      $this->file = $file;

      // Get the full file path.
      $this->path = $this->getPath($file);

      // Get the extension.
      $this->extension = empty($file->extension) ? $this->getExt() : $file->extension;

      // Get the filemime.
      $this->mimetype = $this->getMimeType($file);

      // Get the type for this media.
      $this->type = $this->getType();

      // Get the class for the media.
      $this->class = $this->getClass();

      // Get the mediaType.
      $this->mediaType = !empty($file->mediaType) ? $file->mediaType : $this->class;
    }
  }

  /**
   * Gets the filpath provided a file object.
   *
   * @param type $file
   * @return type
   */
  private function getPath($file) {

    // If the url is set, then just return it.
    if (!empty($file->url)) {
      return $file->url;
    }

    // If the path is set, then just return it.
    if (!empty($file->path)) {

      // Check to see if this is a URI.
      if (file_valid_uri($file->path)) {
        return file_create_url($file->path);
      }
      else {
        return $file->path;
      }
    }

    // If the uri is set, then just return it.
    if (!empty($file->uri)) {
      if (preg_match('/^http(s)?\:\/\//', $file->uri)) {
        return $file->uri;
      }
      else {
        return file_create_url($file->uri);
      }
    }

    // If the value is set, then just return it.
    if (!empty($file->value)) {
      return $file->value;
    }

    // If the value is input, then just return it.
    if (!empty($file->input)) {
      return $file->input;
    }

    // Return nothing.
    return '';
  }

  /**
   * Returns the mimetype.
   */
  private function getMimeType($file) {
    if (!empty($file->filemime)) {
      return $file->filemime;
    }

    if (!empty($file->mimetype)) {
      return $file->mimetype;
    }

    // Or just go off the extension.
    switch ($this->extension) {
      case 'png':
      case 'jpeg':
      case 'jpg':
      case 'gif':
        return 'image/' . $this->extension;
      case 'mp4': case 'm4v': case 'flv': case 'f4v':
        return 'video/mp4';
      case 'webm':
      case 'webv':
        return 'video/webm';
      case 'ogg': case 'ogv':
        return 'video/ogg';
      case '3g2':
        return 'video/3gpp2';
      case '3gpp':
      case '3gp':
        return 'video/3gpp';
      case 'mov':
        return 'video/quicktime';
      case'swf':
        return 'application/x-shockwave-flash';
      case 'oga':
        return 'audio/ogg';
      case 'mp3':
        return 'audio/mpeg';
      case 'm4a': case 'f4a':
        return 'audio/mp4';
      case 'aac':
        return 'audio/aac';
      case 'wav':
        return 'audio/vnd.wave';
      case 'wma':
        return 'audio/x-ms-wma';
      case 'weba':
        return 'audio/webm';
      default:
        return '';
    }

    // Return nothing.
    return '';
  }

  /**
   * Returns the media type.
   */
  private function getType() {

    // Get the mimetype.
    $parts = explode('/', $this->mimetype);
    $mimetype = $parts[0];

    // See if we are an image.
    $image = in_array($this->extension, array('jpg', 'jpeg', 'png', 'gif'));
    $image |= $mimetype == 'image';
    if ($image) {
      return 'image';
    }

    // See if we are video.
    $video = in_array($this->extension, array('mp4', 'm4v', 'flv', 'f4v', 'webm', 'webv', 'ogg', 'ogv', '3g2', '3gpp', '3gp', 'mov', 'swf'));
    $video |= $mimetype == 'video';
    if ($video) {
      return 'video';
    }

    // See if we are audio.
    $audio = in_array($this->extension, array('oga', 'mp3', 'm4a', 'f4a', 'aac', 'wav', 'wma', 'weba'));
    $audio |= $mimetype == 'audio';
    if ($audio) {
      return 'audio';
    }
  }

  /**
   * Returns the media class for the media.
   */
  private function getClass() {

    // Return if this is a media or image class.
    if ($this->type) {
      return $this->type == 'image' ? 'image' : 'media';
    }

    return '';
  }

  /**
   * Returns the extension for the media.
   *
   * @return type
   */
  private function getExt() {
    return drupal_strtolower(drupal_substr($this->path, strrpos($this->path, '.') + 1));
  }

}