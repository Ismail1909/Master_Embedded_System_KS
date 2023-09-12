/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX4.c
 *
 * Description: EX4-Write C Program to Insert an element in an Array
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, location, num;
    char flag = 'y';
    int data[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n > 99 || n <= 0)
    {
        printf("ERROR!!! number should be in range from 1 to 99\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; ++i)
    {

        scanf("%d", &data[i]);
    }

    while(flag == 'y')
    {
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    printf("Enter the location: ");
    scanf("%d", &location);

    // Make space for the element to be inserted if location < n
    for (i = n; i >= location; i--)
    {
        data[i] = data[i - 1];
    }

    data[location - 1] = num;
    n++;

    printf("The Array after insertion: \n");
    for (i = 0; i < n; ++i)
    {

        printf("%d ", data[i]);
    }
    printf("\n\n");
    
    printf("Insert another element?[y/n]: ");
    
    scanf(" %c",&flag);

    }
    printf("Exit");


    return 0;
}