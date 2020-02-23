#include<stdio.h>
#include<stdlib.h>
void ar(float x1,float y1,float x2,float y2,float x3,float y3,float *area);
int check(float *area,float *area1,float *area2,float *area3);
int main()
{
	int r;
	float x1,x2,x3,y1,y2,y3,x4,y4,area,area1,area2,area3;
	printf("x1: ");
	scanf("%f",&x1);
	printf("y1: ");
	scanf("%f",&y1);
	printf("x2: ");
	scanf("%f",&x2);
	printf("y2: ");
	scanf("%f",&y2);
	printf("x3: ");
	scanf("%f",&x3);
	printf("y3: ");
	scanf("%f",&y3);
	ar(x1,y1,x2,y2,x3,y3,&area);
	printf("Area: %f",area);
	printf("\nEnter the co-ordinates of the point: \n");
	printf("x: ");
	scanf("%f",&x4);
	printf("y: ");
	scanf("%f",&y4);
	ar(x1,y1,x2,y2,x4,y4,&area1);
	ar(x1,y1,x4,y4,x3,y3,&area2);
	ar(x4,y4,x2,y2,x3,y3,&area3);
	r=check(&area,&area1,&area2,&area3);
	return 1;
}
void ar(float x1,float y1,float x2,float y2,float x3,float y3,float *area)
{
	
	*area=abs((0.5)*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}
int check(float *area,float *area1,float *area2,float *area3)
{
	if (*area1+*area2+*area3==*area)
		return 1;
	else
		return 0;
}
