/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 8 Pointers
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to print a string in reverse using a pointer.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

int main()
{
    char string[50];
    char temp;
    char *start=string;
    char *end=string;

    printf("Input a string: ");
    scanf("%s",string);

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }

    printf("\nReverse of the string is: %s",string);

    return 0;
}