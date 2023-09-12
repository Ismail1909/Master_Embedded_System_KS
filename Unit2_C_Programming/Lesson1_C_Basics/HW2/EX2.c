 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX2.c
 *
 * Description: EX2- Write C Program to Vowel or Consonant
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet to check: ");
    
    scanf("%c",&c);

    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
            printf("%c is a vowel.",c);
            break;
        default:
            printf("%c is a consonant.",c);
    }


    return 0;

}