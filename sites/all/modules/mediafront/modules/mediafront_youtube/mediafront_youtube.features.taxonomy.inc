<?php
/**
 * @file
 * mediafront_youtube.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mediafront_youtube_taxonomy_default_vocabularies() {
  return array(
    'youtube_category' => array(
      'name' => 'YouTube Category',
      'machine_name' => 'youtube_category',
      'description' => 'The category of the media from YouTube',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'youtube_keywords' => array(
      'name' => 'YouTube Keywords',
      'machine_name' => 'youtube_keywords',
      'description' => 'The keywords provided from YouTube.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
