/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 6 C Structures, Unions and Enums
 *
 * File Name: EX2.c
 *
 * Description: EX2-Write C Program to Add two distances(in inch-feet) System using Structures
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

typedef struct distance
{
    float inch;
    int feet;
}distance;

distance addDistances(distance d1, distance d2);

int main()
{
    distance d1, d2;

    printf("Enter information for 1st distance:\n");

    printf("Enter feet: ");
    scanf("%d", &d1.feet);

    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance:\n");

    printf("Enter feet: ");
    scanf("%d", &d2.feet);

    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    distance sum = addDistances(d1,d2);

    printf("Sum of distances= %d\'-%.1f\"",sum.feet,sum.inch);

    return 0;
}

distance addDistances(distance d1, distance d2)
{
    distance sum;

    sum.feet = d1.feet + d2.feet;

    sum.inch = d1.inch + d2.inch;

    if(sum.inch > 12.0)
    {
        sum.inch -= 12.0;
        sum.feet++;
    }

    return sum;
}