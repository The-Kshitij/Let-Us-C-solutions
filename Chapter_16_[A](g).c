#include<stdio.h>
int main()
{
	char first[50],middle[50],last[50];
	printf("Enter your name: ");
	scanf("%s %s %s",first,middle,last);
	printf("%c.%c.%s",first[0],middle[0],last);
	return 1;
}
