#include<stdio.h>
int main()
{
	double x;
	int y;
	printf("x\t\t\ty\t\ti\n");
	for (y=1;y<=6;y++)
		for (x=5.5;x<=12.5;x++)
			printf("%lf\t\t%d\t\t%lf\n",x,y,2+(y+0.5*x));
	return 1;
}
