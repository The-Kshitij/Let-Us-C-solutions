#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,sum;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	sum=(x-1)/x;
	for (i=2;i<=3;i++)
	{
		sum=sum+(1.0/2.0)*pow((x-1)/x,i);
	}
	printf("Sum: %f\n",sum);
	return 1;
}
