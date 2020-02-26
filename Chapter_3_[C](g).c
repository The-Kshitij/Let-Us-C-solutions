#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of first angle(deg): ");
	scanf("%d",&a);
	printf("Enter the value of second angle(deg): ");
	scanf("%d",&b);
	printf("Enter the value of third angle(deg): ");
	scanf("%d",&c);
	if (a+b+c==180)
		printf("The triangle is valid");
	else
		printf("The triangle is not valid");
	return 1;
}
