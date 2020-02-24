#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter the cartesian co-ordinate in the following form\n(x,y): ");
	scanf("(%f,%f)",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	printf("(%f,%f)",r,theta);
	return 1;
}
