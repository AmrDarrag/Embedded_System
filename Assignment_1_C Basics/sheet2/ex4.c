/*
	C Program to Check Whether a Number is Positive or Negative.
*/


#include <stdio.h>

void main()
{
	float num;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%f",&num);
	if(num != 0)
	{
		if(num > 0)
			printf("%.2f is positive",num);
		else
			printf("%.2f is negative",num);
	}
	else
	{
			printf("You entered Zero");
	}
}