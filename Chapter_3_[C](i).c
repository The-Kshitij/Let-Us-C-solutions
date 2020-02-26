#include<stdio.h>
int main()
{
	int l,b;
	printf("Enter the following\nlength: ");
	scanf("%d",&l);
	printf("Bredth: ");
	scanf("%d",&b);
	if (l*b>2*(l+b))
		printf("Area is more than perimeter.");
	else if (l*b<2*(l+b))
		printf("Perimeter is more than area.");
	else
		printf("Area and perimeter are same.");
	return 1;
}
