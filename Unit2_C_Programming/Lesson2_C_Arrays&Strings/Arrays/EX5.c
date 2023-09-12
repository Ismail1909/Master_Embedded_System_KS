/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX5.c
 *
 * Description: EX5-Write C Program to Search for an element in Array
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, location=-1, num;
    int data[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0)
    {
        printf("ERROR!!! number should be in range from 1 to 100\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; ++i)
    {

        scanf("%d", &data[i]);
    }

    printf("Enter the number to be searched: ");
    scanf("%d", &num);


    //Navigate through the array until you find the element
    for (i = 0; i < n; ++i)
    {

        if(num == data[i])
        {
            location = i+1;
            break;
        }
    }

    if(location == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element is found at location: %d",location);
    }



    return 0;
}