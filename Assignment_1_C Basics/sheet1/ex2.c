/*
	Write C Program to Print a Integer Entered by a User
*/


#include <stdio.h>

void main()
{	int x;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
}