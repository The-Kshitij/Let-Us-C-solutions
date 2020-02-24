#include<stdio.h>
int main()
{
	int c,d;
	printf("Enter the value of \nc: ");
	scanf("%d",&c);
	printf("d: ");
	scanf("%d",&d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("c: %d d: %d",c,d);
	return 1;
}
