#include <stdio.h>
#include "minunit.h"
#include "converter.h"

int tests_run = 0;
 
int foo = 7;
int bar = 4;
 
static char * test_getConversionFactor() {
  int conversionFactor;
  
  conversionFactor =  getConversionFactor("g/L");
  mu_assert("error, conversionFactor != 1000", conversionFactor == 1000);
  return 0;
}
 

static char * all_tests() {
  mu_run_test(test_getConversionFactor);
  return 0;
}
 
int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  }
  else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);
 
  return result != 0;
 }
