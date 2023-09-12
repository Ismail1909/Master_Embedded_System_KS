 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX4.c
 *
 * Description: EX4- Write C Program to Check Whether a Number is Positive or Negative or Zero
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    float num;
    printf("Enter a number: ");
    
    scanf("%f",&num);

    if(num >0)
    {
        printf("%.2f is Positive. \n",num);
    }
    else if(num < 0)
    {
        printf("%.2f is Negative. \n",num);
    }
    else
    {
        printf("You entered Zero. \n");        
    }


    return 0;

}