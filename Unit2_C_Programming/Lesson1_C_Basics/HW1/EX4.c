 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX4.c
 *
 * Description: EX4-Write C Program to Multiply two Floating Point Numbers
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    float num1, num2, product;
    printf("Enter two numbers: ");
    
    fflush(stdout);
    scanf("%f %f",&num1,&num2);

    product = num1 * num2;

    printf("Product: %f",product);

    return 0;

}