MediaFront Module Readme

CONTENTS OF THIS FILE
------------

 * Notes
 * MediaFront Resources
 * Introduction to MediaFront
 * Upgrading from 1.x to 2.x
 * Installation
 * Preparing Drupal for MediaFront
 * Creating and configuring MediaFront presets
 * Creating and configuring playlists using Views
 * Creating custom templates for MediaFront
 * Using links as media content
 * File formats

NOTES
-----

 * This guide is for the 7.x-2.x branch of the MediaFront module.

MEDIAFRONT RESOURCES
--------------------

 * Project Page:
   http://drupal.org/project/mediafront
 * Issue Queue:
   http://drupal.org/project/issues/mediafront
 * Home Page:
   http://www.mediafront.org
 * Documentation:
   http://mediafront.org/documentation.html and
   http://drupal.org/node/1563486

INTRODUCTION TO MEDIAFRONT
--------------------------

The MediaFront module is a front end media solution for Drupal. It employs an
innovative and intuitive administration interface that allows the website
administrator to completely customize the front end media experience for their
users without writing any code. In addition to this amazing module is the
built-in Open Standard Media (OSM) Player.

The Open Standard Media (OSM) Player is an industry changing, open source
(GPLv3) media player that is written in jQuery to dynamically deliver any type
of web media, including HTML5, YouTube, Vimeo, and Flash.

Use this module if you would like...
 * an open source ( GPL ) and free front end media solution. With a built in
   jQuery media player!
 * HTML5 content delivery with dynamic Flash fallback for non-standard media.
 * a dynamic and integrated YouTube and Vimeo player which the same
   presentation to users.
 * easily themeable media player using jQuery-UI ThemeRoller.
 * an advanced, easy to use administrator interface for configuring your media
   player.
 * a simple to install and configure front end media solution. Simply install
   the module and you are ready to go!

UPGRADING FROM 1.x to 2.x
-------------------------

There is currently no upgrade path from 1.x to 2.x. Documentation on how to
upgrade is forthcoming.

Version 2.x of the MediaFront module is a major refractor and simplification on
how the MediaFront module selects the correct media to play. This will not only
provide a major performance boost, but also give you much finer granularity
into what media the media player plays.

INSTALLATION
------------

-  To install and configure MediaFront you will need to install the required
   modules.

   Modules needed:
   * MediaFront

   Modules needed for Views playlist configuration:
   * Views
   * CTools

- Download the latest MediaFront release.

  The most recent version of the MediaFront module can be downloaded and
  extracted from: http://drupal.org/project/mediafront.

- Place the entire MediaFront folder into your sites/all/modules directory or
  use the Drupal interface to install this module (yoursite/admin/modules).

- Go to Admin > Site Building > Modules and enable the MediaFront module. Also
  enable the Open Standards Media Player listed under MediaFront: Players.

PREPARING DRUPAL FOR MEDIAFRONT
-------------------------------

To start, you will need to create a new content type for media.

 1. Go to Structure > Administration > Content types.
 2. Click Add content type.
 3. Choose a name for your new content type. You can name it "Media" or
    anything else.

    Optional: select any additional settings for this content type.

 4. After choosing a name, hit Save and add fields.
 5. In the Manage Fields section, add the following fields:

    label: Media Upload
    name: media_upload
    field: file
    widget: file

    Hit Save.

    label: Image Upload
    name: image_upload
    field: image
    widget: image

    Save.

    (Instead of Media Upload and Image Upload, you can name the fields any name
    you want. You can only use a-z, 0-9, and _ for the field names.)

 6. Edit the media field settings. Click Edit to the right of Media Upload.

    Set the MediaFront Settings field type to Media. Leave Media Type as Media
    Content.

    In allowed file extensions, add the following:
    mp4 m4v mov flv f4v ogg ogv wmv vp6 vp5 mpg avi mpeg mp3 webm

    The Media Upload Field Settings remain the same.

    Hit Save.

 7. Edit the Image field settings. (Click Edit to the right of Image Upload.)

    Set the MediaFront Settings field type to Image. Select a preview style and
    thumbnail style.

    MediaFront Settings:
    Field Type: Image
    Preview Style: for now, we can set this to large.
    Thumbnail Style: for now, we can set this to thumbnail.

    Allowed file extensions: png, gif, jpg, jpeg
    (These are the automatic settings used with an Image Field.)

    Save settings.

 8. Manage Display settings for your media content type.

    Set up the fields in this order and with these settings:

    Field, Label, Format:
    Body, Hidden, Default
    Media Upload, Hidden, Generic File
    Image Upload, Hidden, Hidden

    Save.

 9. Add a node using you media content type.

    Add a title. Upload a media file that adheres to the field type and size
    limit requirements shown. You may also add an image. Save.

CREATING AND CONFIGURING MEDIAFRONT PRESETS
-------------------------------------------

A. Display the media player in a node

   1. Go to Structure > MediaFront Presets > Add Preset.
   2. Select a name for your preset. Let's name it nodeplayer. (When selecting
      a name, follow the character requirements on the page.)
   3. Add a description if you want. For Media Player, select Open Standard
      Media Player. Hit Next.
   4. You will see a preview of how MediaFront will display your media content.
   5. Go to Preset Settings > Player Settings > Playlist Settings> Display
      Settings. Select Disable Playlist. Save preset.
   6. Go to Structure > Content types > Media > Manage Display. Change the
      format for Media Upload to MediaFront Player. Select the rotary wheel to
      edit the MediaFront Presets settings. Select nodeplayer. Hit Update.
      Save.

      Media Upload
      Format: MediaFront Player
      Player Settings: preset. Change to nodeplayer. Update.

    - A note on fields:
      For each content type that will use MediaFront, you must be explicit with
      every field you want to display in MediaFront. The title is automatically
      brought in. If you click on edit on any other field, there is a section
      called MediaFront settings which will determine how a file or field is
      used and displayed in MediaFront.

   7. Visit a node of content type Media to see the media file and image
      displayed using the MediaFront module.

B. Set up a preset for a Views playlist

   1. Go to Structure > MediaFront Presets > Add Preset.
   2. Select a name for your preset. Let's name it player.
   3. Add a description if you want. For Media Player, select Open Standard
      Media Player. Hit Next.
   4. You will see a preview of how MediaFront will display your media content.
   5. Go to Preset Settings > Player Settings > Playlist Settings> Display
      Settings. Make sure Show Playlist is selected and that Disable Playlist
      in not selected. Save preset.
   6. We now have a preset that is ready to be used within a View.

CREATING AND CONFIGURING PLAYLISTS USING VIEWS
----------------------------------------------

How playlists are configured depends upon your implementation needs and can be
adjusted as your needs change. Below are a few examples of how Views can be
configured with MediaFront.

If you have not done so already, install Views and CTools and enable these two
modules.

A. View with one large media player and built-in playlist

 1. Go to Administration > Structure > Views. Add a new view.
    - We will name this view media (though it can be named anything.)
    - Select Show content of type media.
    - Make sure Create a page is selected.
    - Select Continue and edit.

 2. Configure View settings:
    a. Format: Media Player. In Media Player settings:
       - Select For this page.
       - Set MediaFront Presets to player.

    b. Edit the Fields settings:

       * Content: Title
         Exclude from display.

          MediaFront Settings:
           Field Type: Title

       * Content: Image Upload
          Formatter: Image
          Image Style: Thumbnail
          Link image to: nothing

          MediaFront Settings:
           Field Type: Image
           Preview Style: thumbnail
           Playlist Style: thumbnail

       * Content: Media Upload
          Formatter: Generic file

          MediaFront Settings:
           Field Type: Media
           Media Type: Media Content

  3. Save your view. Visit the view at yoursite/media.

B. View with one large media player and a grid of files below

  1. In your View, hit Add page under the Displays section.
  2. For Display name, we will name it Media Grid.
  3. Under Format, set Format to Grid and apply to this page.
     Hit Apply (this display).
  4. Under Header, select Global: MediaFront Player for This page.
     Hit Apply (this display). In Configure Header, set MediaFront Presets to
     player. Under MediaFront Settings, field type should be set to none. Apply
     this display.
  5. Under Page Settings, set Path to media-grid. Hit Apply.
  6. Visit yoursite/media-grid. You should see a large media player with a grid
     of files below the player.
  7. Optional: If you want the files below the player to control the player,
     see Section D of Creating and Configuring Playlists Using Views.

C. View with a grid of miniature media players

  1. Set up the preset.
     a. Go to Structure > MediaFront Presets > Add Preset.
     b. Select a name for your preset. Let's name it gridplayer.
     c. Add a description if you want. For Media Player, select Open Standard
        Media Player. Hit Next.
     d. You will see a preview of how MediaFront will display your media
        content.
     e. Go to Preset Settings > Player Settings > Playlist Settings> Display
        Settings. Select Disable playlist. Save preset.
     f. Under Presentation Settings, set Player Width to 200px and Player
        Height to 150px.
     g. Save preset.

  2. Set up a View page to display mini media players.
     a. Go to Structure > Views and edit the view named media.
     b. In your view, hit Add page under the Displays section. For Display
        name, we will name it Media Grid.
     c. Under Format, set Format to Grid and apply to this page.
        Hit Apply (this display).
     d. Under Page Settings, set Path to gridplayer. Hit Apply.
     e. Under Pager, set items per page to 16 for this page.
        Hit Apply (this display).
     f. Under Fields: Content Type: Media Upload, set Formatter to MediaFront
        Player and MediaFront Presets to gridplayer. Apply (this display).
     g. In Fields: Content Type: Image Upload, make sure Exclude from display
        is selected. Apply (this display).
     h. Hit Save.
     i. Visit yoursite/gridplayer. You should see a page of miniature media
        players.

D. Dynamically linking fields to the player
     
   Videos can be loaded dynamically into the player by linking a field to the
   player. Within your view administration, edit the field you would like to
   dynamically link to the Media Player. Within the MediaFront Settings of this
   field, click the box next to "Link to Player". Save the field and view.

CREATING CUSTOM TEMPLATES FOR MEDIAFRONT
----------------------------------------

One of the major features that MediaFront offers is it provides site builders
the ability to completely build their own media players by using basic HTML5,
CSS, and JavaScript. It employs a very flexible system where every template
has complete control over the media player to modify not only how it looks,
but also how it behaves. For information on creating custom templates, see:
http://drupal.org/node/1563496.

USING LINKS AS MEDIA CONTENT
----------------------------

It is possible to configure MediaFront so that a video is pulled from
externally hosted servers or from your own files. The below configuration
explains how to set up a node type using a text field to bring in media
content. The player can also pull in streamed video content (YouTube, Vimeo,
etc) but this feature is currently being developed.

 1. Create a new content type. Go to Structure > Administration > Content
    types.
 2. Click Add content type.
 3. Choose a name for your new content type. You can name it "Media link" or
    anything else.
  - Optional: select any additional settings you want for this content type.
 4. After choosing a name, hit Save and add fields.
 5. In the Manage Fields section, add the following fields:

    label: Media URL
    name: media_url
    field: text
    widget: Text field

    Hit Save.

 6. In the Media link Manage Fields section, edit the Media URL settings.

    Set the MediaFront Settings field type to Media. Leave Media Type as Media
    Content.

 7. Change the Manage Display settings for Media link.

    Set up the fields in this order and with these settings:

    Field, Label, Format
    Body, Hidden, Default
    Media URL, Hidden, MediaFront Player

    In the Media URL player settings, set the MediaFront preset to your desired
	preset. Hit Update. Hit save.

 8. Add a node using this new content type.

    Go to Content > Add Content > Media link.

    Add a title. In the Media URL field, paste the url of a video. This link
    can be a streamed video or a video file hosted on a server. Hit Save.

FILE FORMATS
------------

Supported audio and video file formats in MediaFront 7.x-2.x:
mp4, m4v, mov, flv, f4v, ogg, ogv, wmv, vp6, vp5, mpg, avi, mpeg, mp3, webm

Please see http://drupal.org/node/1565532 for recommendations for file 
encoding and formatting.