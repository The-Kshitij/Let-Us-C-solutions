#include<stdio.h>
int main()
{
	double w,h,bmi;
	printf("Enter the weight(in kg): ");
	scanf("%lf",&w);
	printf("Enter the height(in mts): ");
	scanf("%lf",&h);
	bmi=w/(h*h);
	//no condition given for bmi in the range 25.9 to 30
	if (bmi<15)
		printf("Starvation");
	else if (bmi>=15.1 && bmi<=17.5)
		printf("Anorexic");
	else if (bmi>=17.6 && bmi<=18.5)
		printf("Underweight");
	else if (bmi>=18.6 && bmi<=24.9)
		printf("Ideal");
	else if (bmi>25 && bmi<25.9)
		printf("Overweight");
	else if (bmi>30 && bmi<30.9)
		printf("Obese");
	else if (bmi>=40)
		printf("Morbidly Obese");
	return 1;
}
