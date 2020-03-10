#include<stdio.h>
#include<strings.h>
void xgets();
void xputs();
int main()
{
	xgets();
	xputs();
	return 1;
}
void xgets()
{
	int i=0;
	char c,d[50];
	printf("Enter the word: ");
	while ((c=getchar())!='\n')
		d[i++]=c;
	d[i]='\0';
	puts(d);
}
void xputs()
{
	int i=0;
	char d[50];
	fflush(stdin);
	printf("Enter the word: ");
	gets(d);
	while (d[i]!='\0')
		printf("%c",d[i++]);
}
