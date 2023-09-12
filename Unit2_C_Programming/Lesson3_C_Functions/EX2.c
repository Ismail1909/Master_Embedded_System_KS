/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 3 C Functions
 *
 * File Name: EX1.c
 *
 * Description: EX1-Write C Program to calculate the factorial of the number using recursion
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

long long calculateFactorial(int num);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    while(num <= 0)
    {
        printf("\nERROR! Enter a positive number: ");
        scanf("%d",&num);

    }

    printf("Factorial of %d = %lld",num,calculateFactorial(num));


    return 0;
}

long long calculateFactorial(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num *calculateFactorial(num-1);
}
