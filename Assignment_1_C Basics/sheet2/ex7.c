/*
	C Program to Find Factorial of a Number
*/


#include <stdio.h>

int main(void) {

	int number ,factorial =1;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&number);

	if(number < 0)
		printf("Error!!! Factorial of negative number doesn't exist");
	else if(number == 0)
    	printf("Factorial = 1");
	else
	{
		for(int i = 1; i <= number ;i++)
			{
				factorial *= i ;
			}
		printf("factorial = %d",factorial);
	}
	return 0;
}
