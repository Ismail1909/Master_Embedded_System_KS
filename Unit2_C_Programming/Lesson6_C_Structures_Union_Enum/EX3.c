/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 6 C Structures, Unions and Enums
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to Add Two Complex Numbers by Passing Structure to a Function
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
}complex;

complex addComplexNumbers(complex n1, complex n2);

int main()
{
    complex n1, n2;

    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f%f",&n1.real,&n1.imag);



    printf("\nFor 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f%f",&n2.real,&n2.imag);



    complex sum = addComplexNumbers(n1,n2);

    printf("Sum= %.1f+%.1fi",sum.real,sum.imag);

    return 0;
}

complex addComplexNumbers(complex n1, complex n2)
{
    complex sum;

    sum.real = n1.real + n2.real;

    sum.imag = n1.imag + n2.imag;

    return sum;
}