#include <check.h>
#include "addition_test.c"

Suite *s;
TCase *tc;
SRunner *sr;

int main()
{
     s = suite_create("RomanCalculator"); // One universal Suite
     sr = srunner_create(s); // Create Suite Runner
     
     
     // Addition
     tc = tcase_create("Addition"); // Create Addition Test Case
     suite_add_tcase(s, tc); // Add Test Cases to Addition Test Case
     tcase_add_test(tc, test_addition_I_I);
     tcase_add_test(tc, test_addition_II_II); 
     tcase_add_test(tc, test_addition_III_III);
     tcase_add_test(tc, test_addition_IV_IV);
     tcase_add_test(tc, test_addition_V_V); 
    
     
     
     
     
     
     srunner_run_all(sr, CK_VERBOSE);
     srunner_free(sr);
   


    return 0;
}
