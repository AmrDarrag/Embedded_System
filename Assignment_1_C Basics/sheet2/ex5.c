/*
	C Program to Check Whether a Character is an Alphabet or not
*/


#include <stdio.h>

void main()
{
	char c;
	printf("Enter a character : ");
	fflush(stdout);
	scanf("%c",&c);
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);
}