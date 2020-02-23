#include<stdio.h>
int main()
{
	float dis;
	printf("Enter the distance(in km): ");
	scanf("%f",&dis);
	printf("Distance in meters: %f\n",1000*dis);
	printf("Distance in feet: %f\n",3280*dis);
	printf("Distance in inches: %f\n",39370*dis);
	printf("Distance in centimeters: %f\n",100*1000*dis);
	return 1;
}
