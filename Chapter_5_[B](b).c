#include<stdio.h>
int main()
{
	int i;
	long int num,fac;
	printf("Enter the number: ");
	scanf("%ld",&num);
	fac=num;
	for (i=1;i<num;i++)
		fac*=i;
	printf("%ld!= %ld",num,fac);
	return 1;
}
