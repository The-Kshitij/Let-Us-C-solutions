#include<stdio.h>
#include<math.h>
int main()
{
	double p,r,q;
	int i,n;
	for (i=1;i<=10;i++)
	{
	printf("Enter the following:\n");
	printf("N: ");
	scanf("%d",&n);
	printf("P: ");
	scanf("%lf",&p);
	printf("R: ");
	scanf("%lf",&r);
	printf("Q: ");
	scanf("%lf",&q);
	printf("Amount: %lf\n",p*pow((1+r/q),n*q));
	}
	return 1;
}
