<?php
/**
 * @file
 * openlocal_organisation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_organisation_taxonomy_default_vocabularies() {
  return array(
    'ol_organisation_type' => array(
      'name' => 'Organisation type',
      'machine_name' => 'ol_organisation_type',
      'description' => 'What kind of organisations there are.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
