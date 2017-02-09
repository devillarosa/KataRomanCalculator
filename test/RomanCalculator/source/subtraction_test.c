#include <check.h>
#include <stdio.h>
#include "RomanCalculator.h"

#define SIZE 256

/// @brief Test X - I
/// @param1 "X"
/// @param2 "I"
/// @return "IX"
START_TEST(test_subtraction_X_I)
{
    char l_result[SIZE];
    
    romanSubtract("X", "I", l_result);
    ck_assert_str_eq(l_result, "IX");


}
END_TEST

/// @brief Test L - II
/// @param1 "L"
/// @param2 "II"
/// @return "XLVIII"
START_TEST(test_subtraction_L_II)
{
    char l_result[SIZE];
    
    romanSubtract("L", "II", l_result);
    ck_assert_str_eq(l_result, "XLVIII");

}
END_TEST

/// @brief Test M - I
/// @param1 "M"
/// @param2 "I"
/// @return "CMXCIX"
START_TEST(test_subtraction_M_I)
{
    char l_result[SIZE];
    
    romanSubtract("M", "I", l_result);
    ck_assert_str_eq(l_result, "CMXCIX");

}
END_TEST
