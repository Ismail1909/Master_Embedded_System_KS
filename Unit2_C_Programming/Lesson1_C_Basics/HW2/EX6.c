 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX6.c
 *
 * Description: EX6- Write C Program to Calculate sum of natural numbers
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter an integer: ");
    
    scanf("%d",&num);

    sum = num*(num+1)/2;

    printf("Sum: %d",sum);


    return 0;

}