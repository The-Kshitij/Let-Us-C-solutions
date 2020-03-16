#include<stdio.h>
int fib(int n,int n1,int n2);
int main()
{
	int c;
	printf("0 1 ");
	c=fib(2,0,1);
	return 1;
}
int fib(int n,int n1,int n2)
{
	if (n==25)
		return 1;
	else
	{
		int t=n2;
		n2=n2+n1;
		n1=t;
		printf("%d ",n2);
		return fib(n+1,n1,n2);
	}
}
