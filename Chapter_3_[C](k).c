#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,l,r,m;
	printf("Enter the value of the co-ordinates of the centre(x,y): ");
	scanf("(%f,%f)",&x,&y);
	printf("Enter the radius: ");
	scanf("%f",&r);
	fflush(stdin);
	printf("Enter the co-ordinates of the point(x,y): ");
	scanf("(%f,%f)",&l,&m);
	if (sqrt(pow(l-x,2)+pow(y-m,2))>r)
		printf("The point is outside the circle ");
	else if (sqrt(pow(l-x,2)+pow(y-m,2))==r)
		printf("The point lies on the circle");
	else
		printf("The point lies inside the circle");
	return 1;
}
