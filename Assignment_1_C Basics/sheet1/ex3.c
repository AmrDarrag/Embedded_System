/*
	Write C Program to Add Two Integers
*/


#include <stdio.h>

void main()
{
	int x, y, sum;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &x, &y);
	sum = x+y;
	printf("Sum: %d",sum);
}