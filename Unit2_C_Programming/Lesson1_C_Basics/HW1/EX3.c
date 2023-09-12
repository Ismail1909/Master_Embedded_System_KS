 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to Add Two Integers
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter two integers: ");
    
    fflush(stdout);
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;

    printf("Sum: %d",sum);

    return 0;

}