#include<stdio.h>
#include<math.h>
void cal(float *,float );
void term(int i,float x,float **sum);
int fac(int n);
int main()
{
	float sum=0,x;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	cal(&sum,x);
	printf("Sin(%0.2f): %f",x,sum);//0.2f is for for having only 2 numbers after decimal
	return 1;
}
void cal(float *sum,float x)
{
	int i=1;
	while (i<=10)
		term(i++,x,&sum);
}
void term(int i,float x,float **sum)
{
	int n=fac(2*i-1);
	**sum+=(pow(x,2*i-1)*(pow(-1,i+1)))/n;
}
int fac(int n)
{
	int i,s=1;
	for (i=1;i<=n;i++)
		s*=i;
	return s;
}
