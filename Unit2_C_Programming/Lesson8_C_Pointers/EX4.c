/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 8 Pointers
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to print the elements of an array in reverse order using pointers.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[15];
    int n,i;
    int* ptr = arr;

    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d",&n);

    printf("\nInput %d number of elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d: ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    ptr--;

    printf("\nThe elements of array in reverse order are : ");

    for(i=n;i>0;i--)
    {
        printf("\nelement - %d: %d",i,*ptr);
        ptr--;
    }


    return 0;
}