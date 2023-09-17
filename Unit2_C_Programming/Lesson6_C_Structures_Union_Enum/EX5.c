/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 6 C Structures, Unions and Enums
 *
 * File Name: EX5.c
 *
 * Description: EX5-Write C Program to find area of a circle, passing arguments to macros.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

#define PI 3.1415

#define area(r) (PI*r*r)

int main()
{
    int radius;
    
    printf("Enter the radius:");
    scanf("%d",&radius);

    printf("Area= %.2f",area(radius));

    return 0;
}