 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX5.c
 *
 * Description: EX5-Write C Program to Find ASCII Value of a Character
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    
    fflush(stdout);
    scanf("%c",&c);

    printf("ASCII value of %c = %d",c,c);

    return 0;

}