//you can use pow() function available in math.h 
#include<stdio.h>
int main()
{
	long int ans=1;
	int i=1,num2;
	int num1;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	while (i<=num2)
	{
		ans=ans*num1;
		i++;
	}
	printf("%d raised to %d: %ld ",num1,num2,ans);
	return 1;
}
