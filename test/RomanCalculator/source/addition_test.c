#include <check.h>
#include <stdio.h>

/// @brief Test I + I
/// @param1 "I"
/// @param2 "I"
/// @return "II"
START_TEST(test_addition_I_I)
{
    char l_input1[] = "I";
    char l_input2[] = "I";
    char *l_result = romanAdd(l_input1, l_input2);
    ck_assert_str_eq(l_result, "II");


}
END_TEST

/// @brief Test II + II
/// @param1 "II"
/// @param2 "II"
/// @return "IV"
START_TEST(test_addition_II_II)
{
    char l_input1[] = "II";
    char l_input2[] = "II";
    char *l_result = romanAdd(l_input1, l_input2);
    ck_assert_str_eq(l_result, "IV");

}
END_TEST

/// @brief Test III+ III
/// @param1 "III"
/// @param2 "III"
/// @return "VI"
START_TEST(test_addition_III_III)
{
    char l_input1[] = "III";
    char l_input2[] = "III";
    char *l_result = romanAdd(l_input1, l_input2);
    ck_assert_str_eq(l_result, "VI");

}
END_TEST

/// @brief Test IV + IV
/// @param1 "IV"
/// @param2 "IV"
/// @return "VIII"
START_TEST(test_addition_IV_IV)
{
    char l_input1[] = "IV";
    char l_input2[] = "IV";
    char *l_result = romanAdd(l_input1, l_input2);
    ck_assert_str_eq(l_result, "VIII");

}
END_TEST

/// @brief Test V + V
/// @param1 "V"
/// @param2 "V"
/// @return "X"
START_TEST(test_addition_V_V)
{
    char l_input1[] = "V";
    char l_input2[] = "V";
    char *l_result = romanAdd(l_input1, l_input2);
    ck_assert_str_eq(l_result, "X");
}
END_TEST
