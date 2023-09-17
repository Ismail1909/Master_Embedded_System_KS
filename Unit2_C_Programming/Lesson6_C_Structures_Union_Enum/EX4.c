/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 6 C Structures, Unions and Enums
 *
 * File Name: EX4.c
 *
 * Description: EX4-Write C Program to store Information(name, roll and marks) of 10 Students using Structure
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
    int i;
    struct student s[10];
    printf("Enter information of students: \n");
    for(i=0;i<10;i++)
    {
    
    s[i].roll = i+1;
    printf("\nFor roll number %d \n",i+1);
    printf("Enter name: ");
    scanf("%s",s[i].name);

    printf("Enter Marks: ");
    scanf("%f",&s[i].marks);
    }

    printf("\n");


    printf("Displaying Information of students: \n");
    for(i=0;i<10;i++)
    {
    printf("\nInformation for roll number: %d \n",s[i].roll);
    printf("Name: %s \n",s[i].name);
    
    printf("Marks: %.2f \n",s[i].marks);
    }
    return 0;
}