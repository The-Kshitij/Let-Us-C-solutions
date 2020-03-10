#include<stdio.h>
#include<math.h>
void getfloat(char c[]);
int main()
{
	char c[10];
	printf("Enter the number: ");
	gets(c);
	getfloat(c);
	return 1;
}
void getfloat(char c[])
{
	int d1,i=0,j;
	double d2=0;
	while (c[i]!='.')
		d1=10*d1+(int)(c[i++]-'0');
	printf("%d\n",d1);
	i+=1;
	j=i;
	while (c[i]!='\0')
		d2=10*d2+(int)(c[i++]-'0');
	d2=d2/pow(10,i-j);
	d2=d1+d2;
	printf("%lf",d2);
}
