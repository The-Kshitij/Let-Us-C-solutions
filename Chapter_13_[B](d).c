#include<stdio.h>
int main()
{
	int i,arr[25],o=0,e=0;
	for (i=0;i<25;i++)
	{
		printf("Enter the element[%d]: ",i+1);
		scanf("%d",&arr[i]);
		if (arr[i]>0)
			e++;
		else
			o++;
	}
	printf("Positive Elements: %d\nEven Elements: %d",o,e);
	return 1;
}
