#include<stdio.h>
int main()
{
	int i,hr,op,size=10;
	for (i=0;i<size;i++)
	{
		printf("Enter the number of hours worked: ");
		scanf("%d",&hr);
		if (hr>40)
			printf("Overtime Pay: %d\n",(hr-40)*12);
		else
			printf("Sorry, you are not eligible for overtime pay\n");
	}
	return 1;
}
