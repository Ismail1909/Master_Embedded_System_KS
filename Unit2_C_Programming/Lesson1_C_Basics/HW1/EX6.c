 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX6.c
 *
 * Description: EX6-Write Source Code to Swap Two Numbers
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    float a,b,temp;
    printf("Enter value of a: ");
    
    scanf("%f",&a);

    printf("Enter value of b: ");
    
    scanf("%f",&b);    

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, value of a = %.2f \n",a);

    printf("After swapping, value of b = %.2f ",b);


    return 0;

}