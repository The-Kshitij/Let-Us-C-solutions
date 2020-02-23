#include<stdio.h>
#include<math.h>
void ar(float a,float b,float c,float *area);
int main()
{
	float a,b,c,area;
	printf("A: ");
	scanf("%f",&a);
	printf("B: ");
	scanf("%f",&b);
	printf("C: ");
	scanf("%f",&c);
	ar(a,b,c,&area);
	printf("Area: %f",area);
	return 1;
}
void ar(float a,float b,float c,float *area)
{
	float s=(a+b+c)/2;
	*area=pow(s*(s-a)*(s-b)*(s-c),0.5);
}
