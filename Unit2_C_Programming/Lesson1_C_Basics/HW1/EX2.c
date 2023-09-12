 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX2.c
 *
 * Description: EX2-Write C Program to Print a Integer Entered by a User
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    
    fflush(stdout);
    scanf("%d",&num);

    printf("You Entered: %d",num);

    return 0;

}