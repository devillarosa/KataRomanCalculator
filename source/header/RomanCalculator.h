#ifndef ROMANCALCUATOR_H
#define ROMANCALCUATOR_H

#include <string.h>

void romanAdd(char *pi_num1, char *pi_num2, char *po_results);
void romanSubtract(char *pi_num1, char *pi_num2, char *po_results);
void convertIntToRoman(int pi_num, char *po_results);
int convertRomanToInt(char *pi_num);

#endif // ROMANCALCULATOR_H
