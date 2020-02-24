#include<stdio.h>
#include<math.h>
int main()
{
	float v,t;
	printf("Enter the value of wind velocity: ");
	scanf("%f",&v);
	printf("Enter the value of temperature: ");
	scanf("%f",&t);
	printf("Wind Chill factor is %f",35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16));
	return 1;
}
