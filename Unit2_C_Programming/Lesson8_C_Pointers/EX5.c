/******************************************************************************
 *
 * Unit: 2 C Programming
 *
 * Lesson: 8 Pointers
 *
 * File Name: EX5.c
 *
 * Description: EX5-Write C Program to show a pointer to an array which contents are pointer to structure.
 *
 * Author: Ismail Amr
 ******************************************************************************/
#include <stdio.h>

typedef struct emp
{
    char name[50];
    int id;
    
}Employee;


int main()
{
    
    /*Creating some instances of employee structure*/
    printf("Creating some instances of employee structure > emp1{Alex,1002},emp2{Ahmed,1003},emp3{Ismail,1004} \n\n");
    Employee emp1 = {"Alex",1002};
    Employee emp2 = {"Ahmed",1003};
    Employee emp3 = {"Ismail",1004};        


    
    /* Creating an array of pointer to Employees */
    printf("Creating an array of pointer to Employees > Employee* arr[5]={&emp1,&emp2,&emp3}\n\n");
    Employee* arr[5]={&emp1,&emp2,&emp3};



    /* Creating a pointer to an array which contents are pointer to structure with the arr address value */
    printf("Creating a pointer to an array which contents are pointer to structure > Employee* (*ptr)[5] = arr\n\n");
    Employee* (*ptr)[5];
    ptr = &arr;
    
    printf("Address of emp1 structure (&emp1) : %p \n",&emp1);
    printf("Address of first element of the array of pointer to employee (arr[0]):  %p\n",arr[0]);
    printf("Address of first employee using the pointer to the array(**ptr): %p\n\n", **ptr);

    printf("Name of Emp2 (emp2.name): %s\n",emp2.name);
    printf("Name of Emp1 using array (arr[1]->name): %s\n",arr[1]->name);
    printf("Name of Emp1 using pointer to array (*(*ptr+1))->name): %s\n",(*(*ptr+1))->name);


    return 0;
}