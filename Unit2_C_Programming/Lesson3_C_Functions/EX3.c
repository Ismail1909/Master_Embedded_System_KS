/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 3 C Functions
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to reverse a sentence using recursion
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

void reverse(char* str );

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    reverse(str);


    return 0;
}

void reverse(char *str)
{
    /* on each recursive call you point to the string starting from the next element
       until you reach the terminating character, then on return you print the first
       character.
    */
    if(*(str+1) != '\0')
    {
        reverse(str+1);
    }
    
    printf("%c",str[0]);
}
