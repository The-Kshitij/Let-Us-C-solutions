#include<stdio.h>
int main()
{
	int size,num,i;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("You entered:\n");
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nEnter the number to find: ");
	scanf("%d",&num);
	int c=0;
	for (i=0;i<size;i++)
		if (arr[i]==num)
			c++;
	if (c==0)
		printf("\n%d is not in the list",num);
	else
		printf("\nFrequency of %d is %d",num,c);
	return 1;
}
