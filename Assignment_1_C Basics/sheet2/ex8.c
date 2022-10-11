/*
	C Program to Make a Simple Calculator 
	to Add, Subtract, Multiply or Divide 
	Using switch...case
*/



#include <stdio.h>

void main()
{
	char operator;
	float num1 , num2;
	printf("Enter an operator : ");
	fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands : ");
	fflush(stdout);
	scanf("%f %f",&num1 ,&num2);

	switch(operator)
	{
	case '+':
	{
		printf("%.2f %c %.2f = %.2f",num1 ,operator ,num2 ,num1 + num2);
	}
	break;
	case '-':
	{
		printf("%.2f %c %.2f = %.2f",num1 ,operator ,num2 ,num1 - num2);
	}
	break;
	case '*':
	{
		printf("%.2f %c %.2f = %.2f",num1 ,operator ,num2 ,num1 * num2);
	}
	break;
	case '/':
	{
		printf("%.2f %c %.2f = %.2f",num1 ,operator ,num2 ,num1 / num2);
	}
	break;
	default:
		printf("%c Not an Operator",operator);
	}
}