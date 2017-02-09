#include <check.h>
#include "addition_test.c"
#include "subtraction_test.c"

Suite *s;
TCase *tc_addition;
TCase *tc_subtraction;
SRunner *sr;

int main()
{
     s = suite_create("RomanCalculator"); // One universal Suite
     sr = srunner_create(s); // Create Suite Runner
     
     
     // Addition
     tc_addition = tcase_create("Addition"); // Create Addition Test Case
     suite_add_tcase(s, tc_addition); // Add Test Cases to Addition Test Case
     tcase_add_test(tc_addition, test_addition_I_I);
     tcase_add_test(tc_addition, test_addition_II_II); 
     tcase_add_test(tc_addition, test_addition_III_III);
     tcase_add_test(tc_addition, test_addition_IV_IV);
     tcase_add_test(tc_addition, test_addition_V_V); 
     tcase_add_test(tc_addition, test_addition_XIV_LX);
     tcase_add_test(tc_addition, test_addition_D_D); 
    
     
     
     // Subtraction
     tc_subtraction = tcase_create("Subtraction"); // Create Addition Test Case
     suite_add_tcase(s, tc_subtraction); // Add Test Cases to Addition Test Case
     tcase_add_test(tc_subtraction, test_subtraction_X_I);
     tcase_add_test(tc_subtraction, test_subtraction_L_II); 
     tcase_add_test(tc_subtraction, test_subtraction_M_I);
     
     
     
     srunner_run_all(sr, CK_VERBOSE);
     srunner_free(sr);
   


    return 0;
}
