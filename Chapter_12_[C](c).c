#include"areaperi.h"
int main()
{
	float a,b,c,s,area,peri;
	printf("Enter the length of following:\n");
	printf("Side 1: ");
	scanf("%f",&a);
	printf("Side 2: ");
	scanf("%f",&b);
	printf("Side 3: ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	area=tringle_area(a,b,c,s);
	printf("Area of triangle: %f\n",area);
	peri=triangle_peri(a,b,c);
	printf("Perimeter of triangle: %f\n",peri);
	printf("Enter the radius of the circle: ");
	scanf("%f",&a);
	area=circle_area(a);
	printf("Area of Circle: %f\n",area);
	peri=circle_peri(a);
	printf("Perimeter of circle: %f\n",peri);
	area=circle_area(a);
	printf("Enter the side length of square: ");
	scanf("%f",&a);
	area=square_area(a);
	peri=square_peri(a);
	printf("Area of square: %f\n",area);
	printf("Perimeter of square: %f",peri);
	return 1;
}
