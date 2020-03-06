#include<stdio.h>
int main()
{
	float side1,side2,side3;
	printf("Enter the value of \nSide 1: ");
	scanf("%f",&side1);
	printf("Side 2: ");
	scanf("%f",&side2);
	printf("Side 3: ");
	scanf("%f",&side3);
	if (side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
		printf("The triangle is valid");
	else
		printf("The triangle is not valid");
	return 1;
}
