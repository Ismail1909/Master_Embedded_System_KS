/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 8 Pointers
 *
 * File Name: EX1.c
 *
 * Description: EX1-Write C Program to demonstrate how to handle the pointers in the program.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

int main()
{
    int m = 29;
    int *ab;
    printf("Define an integer variable called m with value 29 and a pointer to integer called ab \n\n");

    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n\n", m);

    ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab: %p \n", ab);
    printf("Content of pointer ab: %d \n\n", *ab);

    m = 34;
    printf("The value of m assigned to %d now. \n", m);
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %d\n\n", *ab);

    *ab = 7;
    printf("The pointer variable ab is assigned with the value %d now.\n", *ab);
    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n", m);


    return 0;
}