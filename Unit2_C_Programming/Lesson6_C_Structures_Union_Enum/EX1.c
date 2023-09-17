/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 6 C Structures, Unions and Enums
 *
 * File Name: EX1.c
 *
 * Description: EX1-Write C Program to store Information(name, roll and marks) of a Student using Structure
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;

};

int main()
{
    struct student s;
    printf("Enter information of students: \n\n");

    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter roll number: ");
    scanf("%d",&s.roll);

    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    printf("\n");

    printf("Displaying Information: \n");

    printf("name: %s \n",s.name);
    printf("Roll: %d \n",s.roll);
    printf("Marks: %.2f \n",s.marks);
    
    return 0;
}