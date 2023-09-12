 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX1.c
 *
 * Description: EX1-Write C Program to find frequency of a character in String
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    char str[1000],c;
    int freq=0,i=0;

    printf("Enter a string: ");
    gets(str);

    printf("\nEnter a character to find frequency: ");
    scanf(" %c",&c);

    while(str[i] != '\0')
    {
        if(str[i++] == c)
        {
            freq++;
        }
    }
    printf("\nFrequency of %c = %d",c,freq);

    return 0;

}