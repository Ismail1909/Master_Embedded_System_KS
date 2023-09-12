 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX2.c
 *
 * Description: EX2-Write C Program to Calculate Average using Arrays
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int n,i;
    float sum=0.0,average=0.0;
    float data[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while (n>100 || n<=0)
    {
        printf("ERROR!!! number should be in range from 1 to 100\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
    }
    

    for(i=0;i<n;++i)
    {
        printf("%d. Enter Number: ",i+1);
        scanf("%f",&data[i]);
        sum += data[i];
    }

    average = sum/n;

    printf("Average: %.2f",average);

    return 0;
}