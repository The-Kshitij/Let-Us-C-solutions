#include<stdio.h>
#include<math.h>
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
	{
		if (side1==side2 && side1==side3)
			printf("It's an equilateral triangle.");
		else if (side1==side2 || side1==side3 || side2==side3)
			printf("It's an isosceles triangele.");
		else if (pow(side1,2)+pow(side2,2)==pow(side3,2) || pow(side1,2)+pow(side3,2)==pow(side2,2) || pow(side2,2)+pow(side3,2)==pow(side1,2))
			printf("It's a right angled triangle.");
		else
			printf("It's a scalene triangle.");
	}
	else
		printf("The triangle is not valid.");
	return 1;
}
