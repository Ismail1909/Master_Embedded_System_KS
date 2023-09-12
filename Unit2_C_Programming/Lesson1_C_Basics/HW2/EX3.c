 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX3.c
 *
 * Description: EX3- Find the larget number among three numbers
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    float num1,num2,num3;
    printf("Enter three numbers: ");
    
    scanf("%f %f %f",&num1,&num2,&num3);

    if(num1 >= num2)
    {
        if(num1 >= num3)
        {
            printf("Largest Number is %.2f", num1);
        }
        else
        {
            printf("Largest Number is %.2f", num3);
        }
    }
    else if (num2 >= num3)
    {
        printf("Largest Number is %.2f", num2);
    }
    else
    {
        printf("Largest Number is %.2f", num3);
    }

    return 0;

}