#include<stdio.h>
#include<math.h>
int main()
{
	float angle,sum;
	printf("Enter the angle: ");
	scanf("%f",&angle);
	angle=angle*3.14/180;
	sum=pow(sin(angle),2)+pow(cos(angle),2);
	if (sum==1)
		printf("Sum of sine and cosine is 1");
	else
		printf("Sum of sine and cosine is not 1");
	return 1;
}
