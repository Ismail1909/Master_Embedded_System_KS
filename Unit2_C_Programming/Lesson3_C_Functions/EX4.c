/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 3 C Functions
 *
 * File Name: EX4.c
 *
 * Description: EX3-Write C Program to calculate the power of the number using recursion
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

int power(int base, int exp);

int main()
{
    int base, exp;
    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter power number(positive integer): ");
    scanf("%d", &exp);

    printf("%d^%d = %d", base, exp, power(base, exp));

    return 0;
}

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    return base * power(base, exp - 1);
}
