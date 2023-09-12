 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX7.c
 *
 * Description: EX7- Write C Program to Find Factorial of a Number
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int num,i;
    unsigned long long factorial=1;
    printf("Enter an integer: ");
    
    scanf("%d",&num);

    if(num <0)
    {
        printf("ERROR!!! Factorial of a negative number does not exist");
        return 0;
    }

    for(i=1 ; i<=num;++i)
    {
        factorial *=i;
    }

    printf("Sum: %lu",factorial);


    return 0;

}