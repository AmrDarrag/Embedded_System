/*
	C Program to Calculate Sum of Natural Numbers
*/


#include <stdio.h>

void main()
{
	int i ,sum = 0 ,num;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1 ; i<=num; i++)
	{
		sum += i;
	}
	printf("sum = %d",sum);
}