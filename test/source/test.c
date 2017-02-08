#include "check.h"
#include <stdio.h>

START_TEST(test_check_fork)
{

}
END_TEST

START_TEST(test_check_fork2)
{

}
END_TEST

Suite *s;
TCase *tc;
SRunner *sr;

int main()
{
     s = suite_create("TestSuite"); // One universal Suite
     tc = tcase_create("TestCase"); // Create Test Case
     sr = srunner_create(s); // Create Suite Runner
   
     suite_add_tcase(s, tc); // Add Test Case to Suite
     tcase_add_test(tc, test_check_fork); // Add Tests to Test Case
     tcase_add_test(tc, test_check_fork2); // Add Tests to Test Case
    
     srunner_run_all(sr, CK_VERBOSE);
     srunner_free(sr);
   


    return 0;
}
