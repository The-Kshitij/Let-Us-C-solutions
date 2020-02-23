#include<stdio.h>
void cal(float *m1,float *m2,float *m3,float *avg,float *per);
int main()
{
	float m1,m2,m3,avg,per;
	printf("Enter the first mark: ");//assuming that marks are out of 100
	scanf("%f",&m1);
	printf("Enter the second mark: ");
	scanf("%f",&m2);
	printf("Enter the third mark: ");
	scanf("%f",&m3);
	cal(&m1,&m2,&m3,&avg,&per);
	printf("Average: %f \nPercentage Scored(total): %f",avg,per);
	return 1;
}
void cal(float *m1,float *m2,float *m3,float *avg,float *per)
{
	*avg=(*m1+*m2+*m3)/3;
	*per=((*m1+*m2+*m3)/300)*100;
}
