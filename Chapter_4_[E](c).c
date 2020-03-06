#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter\na: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	(a>b?(a>c?printf("%f is maximum",a):printf("%f is maximum",c)):(b>c?printf("%f is maximum",b):printf("%f is maximum",c)));
	return 1;
}

