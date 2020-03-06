#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	if (c>=65 && c<=90)
		printf("It's a small case letter");
	else if (c>=97 && c<=122)
		printf("It's a capital letter");
	else if (c>=48 && c<=57)
		printf("It's a number");
	else
		printf("It's a special symbol");
	return 1;
}
