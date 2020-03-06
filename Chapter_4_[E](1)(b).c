#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	(c>=0 && c<=47)||(c>=58 && c<65)||(c>90 && c<97)||(c>122)?printf("It's a special sybmbol"):printf("It's not a special symbol");
	return 1;
}
