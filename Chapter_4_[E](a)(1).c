#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	c>=97 && c<=122?printf("It's in lower case"):printf("It's not in lower case");
	return 1;
}
