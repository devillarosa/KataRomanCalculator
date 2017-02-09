#include <stdlib.h>
#include <string.h>
#include "RomanCalculator.h"

void romanAdd(char *pi_num1, char *pi_num2, char *po_results)
{
    //Convert pi_num1 to an integer
    int l_num1 = convertRomanToInt(pi_num1);
    
    //Convert pi_num2 to an integer
    int l_num2 = convertRomanToInt(pi_num2);
    
    //Add
    int l_results = l_num1 + l_num2;

    //Convert Integer to Roman
    convertIntToRoman(l_results, po_results);
    
}

//Credit to: http://stackoverflow.com/questions/4986521/how-to-convert-integer-value-to-roman-numeral-string
void convertIntToRoman(int pi_num, char *po_results)
{
    char *huns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DDC", "DCCC", "CM"};
    char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int size[] =   {0 ,  1 ,  2  ,   3  ,  2  ,  1 ,   2 ,   3   ,   4  ,   2 };

    while (pi_num >= 1000)
    {
        *po_results++ = 'M';
        pi_num -= 1000;
    }
        
    strcpy (po_results, huns[pi_num/100]); po_results += size[pi_num/100];  pi_num = pi_num % 100;
    strcpy (po_results, tens[pi_num/10]);  po_results += size[pi_num/10];   pi_num = pi_num % 10;
    strcpy (po_results, ones[pi_num]);     po_results += size[pi_num];
    
    
    *po_results = '\0';

}

//Credit to: https://leetcode.com/problems/roman-to-integer/?tab=Solutions
int convertRomanToInt(char *pi_num)
{
    int l_length = strlen(pi_num);
    int *l_array = (int *)malloc(l_length * sizeof(int));
    
    int i;
    for(i = 0; i < l_length; i++)
    {
        switch (pi_num[i])
        {
            case 'M':
                l_array[i] = 1000;
                break;
            case 'D':
                l_array[i] = 500;
                break;
            case 'C':
                l_array[i] = 100;
                break;
            case 'L':
                l_array[i] = 50;
                break;
            case 'X':
                l_array[i] = 10;
                break;
            case 'V':
                l_array[i] = 5;
                break;
            case 'I':
                l_array[i] = 1;
                break;
        }
    }

    int l_sum = 0;
    for (i = 0; i < l_length - 1; i++)
    {
        //If a lesser numeral is put befoire a bigger it means subtraction of the lesser from the bigger
        if(l_array[i] < l_array[i+1]) 
            l_sum-=l_array[i];
        else
            l_sum+=l_array[i];
    }
   
     
    l_sum += l_array[l_length - 1];
    
    //free array
    free(l_array);
    l_array = NULL;
    
    return l_sum;
}
