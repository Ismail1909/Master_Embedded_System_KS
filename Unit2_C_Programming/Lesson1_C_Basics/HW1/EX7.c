 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX7.c
 *
 * Description: EX7-Write Source Code to Swap Two Numbers without Temp
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter value of a: ");
    
    scanf("%f",&a);

    printf("Enter value of b: ");
    
    scanf("%f",&b);    

    a = a+b; //a+b
    b = a-b; //a+b-b = a
    a = a-b; // a+b-a = b

    printf("After swapping, value of a = %.2f \n",a);

    printf("After swapping, value of b = %.2f ",b);


    return 0;

}