#include<stdio.h>
void getint(char c[]);
int main()
{
	char d[5];
	printf("Enter the number: ");
	gets(d);
	getint(d);
	return 1;
}
void getint(char c[])
{
	int i=0,d=0;
	while (c[i]!='\0')
	{
		d=d*10+(int)(c[i++]-'0');
	}
	printf("%d",d);
}
