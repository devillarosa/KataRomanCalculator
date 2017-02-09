#include <check.h>
#include <stdio.h>
#include "RomanCalculator.h"

#define SIZE 256

/// @brief Test I + I
/// @param1 "I"
/// @param2 "I"
/// @return "II"
START_TEST(test_addition_I_I)
{
    char l_result[SIZE];
    
    romanAdd("I", "I", l_result);
    ck_assert_str_eq(l_result, "II");


}
END_TEST

/// @brief Test II + II
/// @param1 "II"
/// @param2 "II"
/// @return "IV"
START_TEST(test_addition_II_II)
{
    char l_result[SIZE];
    
    romanAdd("II", "II", l_result);
    ck_assert_str_eq(l_result, "IV");

}
END_TEST

/// @brief Test III+ III
/// @param1 "III"
/// @param2 "III"
/// @return "VI"
START_TEST(test_addition_III_III)
{
    char l_result[SIZE];
    
    romanAdd("III", "III", l_result);
    ck_assert_str_eq(l_result, "VI");

}
END_TEST

/// @brief Test IV + IV
/// @param1 "IV"
/// @param2 "IV"
/// @return "VIII"
START_TEST(test_addition_IV_IV)
{
    char l_result[SIZE];
    
    romanAdd("IV", "IV", l_result);
    ck_assert_str_eq(l_result, "VIII");

}
END_TEST

/// @brief Test V + V
/// @param1 "V"
/// @param2 "V"
/// @return "X"
START_TEST(test_addition_V_V)
{
    char l_result[SIZE];

    romanAdd("V", "V", l_result);
    ck_assert_str_eq(l_result, "X");
}
END_TEST

/// @brief Test XIV + LX
/// @param1 "XIV"
/// @param2 "LX"
/// @return "LXXIV"
START_TEST(test_addition_XIV_LX)
{
    char l_result[SIZE];

    romanAdd("XIV", "LX", l_result);
    ck_assert_str_eq(l_result, "LXXIV");
}
END_TEST

/// @brief Test D + D
/// @param1 "D"
/// @param2 "D"
/// @return "M"
START_TEST(test_addition_D_D)
{
    char l_result[SIZE];

    romanAdd("D", "D", l_result);
    ck_assert_str_eq(l_result, "M");
}
END_TEST
