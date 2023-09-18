/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 8 Pointers
 *
 * File Name: EX2.c
 *
 * Description: EX2-Write C Program to print all the alphabets using a pointer.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

int main()
{
    char alphabet[27];
    int i;
    char *ptr=alphabet;

    for(i=0;i<26;i++)
    {
        *ptr = i+'A';
        ptr++;
    }
    ptr = alphabet;

    printf("The Alphabet are: ");
    for(i=0;i<26;i++)
    {
        printf("%c ",*ptr++);

    }    



    return 0;
}