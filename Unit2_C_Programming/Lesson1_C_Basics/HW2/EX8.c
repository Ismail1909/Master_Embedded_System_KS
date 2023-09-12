 /******************************************************************************
 *
 * Unit: 2 C Programming
 * 
 * Lesson: 3 C Basics
 *
 * File Name: EX8.c
 *
 * Description: EX8- Write C Program to Make a Simple Calculator Using Switch...Case
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include<stdio.h>

int main()
{
  char op;
  float num1, num2;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  printf("Enter two operands: ");
  scanf("%f %f", &num1, &num2);

  switch (op) 
  {
    case '+':
      printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
      break;

    default:
      printf("ERROR!!! operator is not correct");
  }
    return 0;

}