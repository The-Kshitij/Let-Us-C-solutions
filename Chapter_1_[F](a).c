#include<stdio.h>
int main()
{
	float sal;
	printf("Enter Raman's salary: ");
	scanf("%f",&sal);
	printf("Raman's gross salary: %f",sal+0.4*sal+0.2*sal);
	return 1;
}
