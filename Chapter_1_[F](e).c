#include<stdio.h>
int main()
{
	float l,b,ar,r;
	printf("Enter the length of rectangle: ");
	scanf("%f",&l);
	printf("Enter the bredth of rectangle: ");
	scanf("%f",&b);
	printf("\nArea of the rectangle is %f",l*b);
	printf("\nPerimeter of the rectangle %f\n",2*(l+b));
	printf("Enter the radius: ");
	scanf("%f",&r);
	printf("Area of the circle is %f\n",3.14*r*r);
	printf("Circumference of the circle %f",2*3.14*r);
	return 1;
}
