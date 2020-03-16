#include<stdio.h>
#define mean(x,y) ((x+y)/2.0)
#define absolute(n) (n>0?n:n*-1)
#define lower(c) (c+32)
#define bigger(x,y) (x>y?x:y)
int main()
{
	char c;
	int i,j,max;
	float mn;
	printf("Enter a capital character: ");
	scanf("%c",&c);
	printf("Lower Case Character: %c\n",lower(c));
	printf("Enter 2 numbers: ");
	scanf("%d %d",&i,&j);
	max=bigger(i,j);
	printf("Max: %d\n",max);
	printf("Enter 2 numbers: ");
	scanf("%d %d",&i,&j);
	mn=mean(i,j);
	printf("Mean of the numbers: %f\n",mn);
	fflush(stdin);
	printf("Enter a number: ");
	scanf("%d",&i);
	i=absolute(i);
	printf("Absolute Value: %d",i);
	return 1;
}
