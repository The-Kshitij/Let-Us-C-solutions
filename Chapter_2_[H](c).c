#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,area,s;
	printf("Enter the following values of:\n");
	printf("First Side: ");
	scanf("%f",&a);
	printf("Second Side: ");
	scanf("%f",&b);
	printf("Third Side: ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area: %f",area);
	return 1;
}
