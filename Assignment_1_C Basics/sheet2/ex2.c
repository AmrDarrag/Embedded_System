/*
	C Program to Check Vowel or Consonant.
*/


#include <stdio.h>

void main()
{
	char alphabet;
	printf("Enter a char you want to check : ");
	fflush(stdout);
	scanf("%c",&alphabet);
	if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
		printf("%c is vowel.",alphabet);
	else
		printf("%c is consonant.",alphabet);
}