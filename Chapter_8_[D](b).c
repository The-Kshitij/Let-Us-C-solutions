#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("%d raised to %d: %d",a,b,power(a,b));
	return 1;
}
int power(int a,int b)
{
	return pow(a,b);
}
