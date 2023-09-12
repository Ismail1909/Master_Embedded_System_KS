 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX5.c
 *
 * Description: EX5- Write C Program to Check Whether a Character is an Alphabet or not
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    
    scanf("%c",&c);

    if( (c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z')) /*Check if the ascii value of C is within the ascii value range of the alphabet */
    {
        printf("%c is an alphabet.",c);        
    } 
    else
    {
        printf("%c is not an alphabet.", c);
    }


    return 0;

}