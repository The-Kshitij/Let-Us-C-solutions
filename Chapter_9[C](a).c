#include<stdio.h>
#include<math.h>
void rec(float *,float *,float *);
int main()
{
	float sum=0,avg=0,std=0;//avg is for average and std is for standard deviation
	rec(&sum,&avg,&std);
	printf("Sum: %f \nAverage: %f \nStandard Deviation: %f\n",sum,avg,std);
	return 1;
}
void rec(float *sum,float *avg,float *std)
{
	int i;
	float a[5];//[] indicates that a is an array and can store 5 floating values,if you don't know arrays then you can simply create 5 variables for storing the five values
	for (i=0;i<5;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%f",&a[i]);
	}
	for (i=0;i<5;i++)
		*sum+=a[i];
	*avg=*sum/5;
	for (i=0;i<5;i++)
		*std+=(a[i]-*avg)*(a[i]-*avg);//or you can use pow() function 
	*std=*std/5;
	*std=sqrt(*std);
}
