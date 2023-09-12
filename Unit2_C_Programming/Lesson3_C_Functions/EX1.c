/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 3 C Functions
 *
 * File Name: EX1.c
 *
 * Description: EX1-Write C Function to print prime numbers between two intervals
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

void printPrimeInterval(int num1, int num2);

int main()
{
    int n1, n2;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n1, &n2);

    /*In case the user entered the bigger number first*/
    if (n1 > n2)
    {
        printPrimeInterval(n2, n1);
    }
    else
    {
        printPrimeInterval(n1, n2);
    }

    return 0;
}

void printPrimeInterval(int num1, int num2)
{
    int i = 0, j = 0;
    char primeFlag; /* A flag for checking if the number is prime or not*/

    printf("Prime numbers between %d and %d are: ", num1, num2);

    
    for (i = num1 + 1; i < num2; i++)
    {
        primeFlag = 1;

        /*Check if the number is divisible by any number other than 1*/
        for (j = 2; j < i / 2; j++)
        {

            /*If the number is divisible, clear the flag*/
            if (i % j == 0)
            {
                primeFlag = 0;
                break;
            }
        }

        /*If the flag is set, then the number is prime*/
        if (primeFlag == 1)
        {
            printf("%d ", i);
        }
    }
}