#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter the co-ordinates(x,y): ");
	scanf("(%f,%f)",&x,&y);
	//&& stands for logical and
	if (x==0 && y==0)
		printf("Point lies on the origin");
	else if (x==0)
		printf("Point lies on the y-axis");
	else if (y==0)
		printf("Point lies on x-axis");
	return 1;
}
