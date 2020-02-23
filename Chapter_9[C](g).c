#include<stdio.h>
int main()
{
	int a,b,t,i;
	printf("Enter the two numbers: \n");
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	if (a>b)
		while (b!=0)
		{
			i=a/b;
			t=b;
			b=a-i*b;
			a=t;
		}
	printf("Greatest Common divisor is %d",a);
	return 1;
}
