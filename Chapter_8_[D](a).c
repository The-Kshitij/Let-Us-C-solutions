#include<stdio.h>
int fac(int n);
int main()
{
	int n;
	printf("Enter a value: ");
	scanf("%d",&n);
	printf("%d!= %d",n,fac(n));
	return 1;
}
int fac(int n)
{
	if (n==1)
		return 1;
	else
		return n*fac(n-1);
}
