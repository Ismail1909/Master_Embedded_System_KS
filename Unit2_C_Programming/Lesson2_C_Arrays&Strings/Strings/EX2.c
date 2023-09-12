 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX2.c
 *
 * Description: EX2-Write C Program to find the length of string
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    char str[1000];
    int i=0;

    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i] != '\0';i++);
    
    printf("The length of the string is %d",i);

    return 0;

}