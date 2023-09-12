 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to reverse the string without library function
 *
 * Author: Ismail Amr
 ******************************************************************************/

/* using strlen() is an exception */
#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],temp;
    int i=0, j=0;

    printf("Enter a string: ");
    gets(str);

    /*get string length*/
    j = strlen(str) -1;
    
    /*swap elements from start with elements from end until the two iterators meet*/
    while(i<j)
    {
        /*swapping*/
        temp = str[j];
        str[j]= str[i];
        str[i]=temp;

        /*moving the iterators*/
        i++;
        j--;
    }
    
    printf("\nThe Reverse string: %s ",str);

    return 0;

}