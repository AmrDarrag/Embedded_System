/*
	Write C Program to Multiply two Floating Point Numbers
*/


#include <stdio.h>

void main()
{
	float x, y, Product;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%f %f", &x, &y);
	Product = x * y;
	printf("Product: %f",Product);
}