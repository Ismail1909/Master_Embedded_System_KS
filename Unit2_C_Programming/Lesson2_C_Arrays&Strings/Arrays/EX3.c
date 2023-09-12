 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 4 C Arrays & Strings
 *
 * File Name: EX3.c
 *
 * Description: EX3-Write C Program to Find Transpose of a Matrix
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
    int i,j,r,c;
    int a[10][10],aT[10][10];

    printf("Enter rows and columns of matrix: ");
    scanf("%d%d",&r,&c);

     while (r>10 || r<=0 || c>10 || c<=0)
    {
        printf("ERROR!!! row and column should be in range from 1 to 10\n");
        printf("Enter the number again: ");
        scanf("%d%d",&r,&c);
    }

    printf("Enter the elements of the Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            
        }
    }

    printf("Entered Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            aT[i][j] = a[j][i];
            printf("%d ",aT[i][j]);
        }
        printf("\n");
    }    

    return 0;
}