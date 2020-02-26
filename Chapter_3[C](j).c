#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("Enter the following:\n");
	printf("(x1,y1): ");
	scanf("(%d,%d)",&x1,&y1);
	fflush(stdin);
	printf("(x2,y2):");
	scanf("(%d,%d)",&x2,&y2);
	fflush(stdin);
	printf("(x3,y3): ");
	scanf("(%d,%d)",&x3,&y3);
	if (y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2)==0)
		printf("The points lie on a straight line");
	else
		printf("The points are not on a straight line");
	return 1;
}
