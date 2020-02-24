#include<stdio.h>
#include<math.h>
int main()
{
	float theta;
	printf("Enter the value of theta: ");
	scanf("%f",&theta);
	printf("Sin(%f): %f\tCos(%f): %f\tTan(%f): %f",theta,sin(theta*3.14/180),theta,cos(theta*3.14/180),theta,tan(theta*3.14/180));
	return 1;
}
