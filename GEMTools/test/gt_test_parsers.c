/*
 * PROJECT: GEM-Tools library
 * FILE: gt_test_parsers.c
 * DATE: 03/10/2012
 * DESCRIPTION: // TODO
 */

#include "gt_test.h"

// Include Suites
#include "gt_suite_input_map_parser.c"

int main(void) {
  SRunner *sr = srunner_create(gt_input_map_parser_suite());
  //srunner_add_suite(sr,gt_ihash_suite());

  // Run the suites
  srunner_run_all(sr,CK_NORMAL);
  uint32_t num_test_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  // Return unit tests
  return (num_test_failed==0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
