 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX1.c
 *
 * Description: EX1- Write C Program to Check Whether a Number is Even or Odd
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer you want to check: ");
    
    scanf("%d",&num);

    if(num % 2 ==0)
    {
        printf("%d is Even. \n",num);
    }
    else
    {
        printf("%d is Odd. \n",num);
    }


    return 0;

}