#include<stdio.h>
int main()
{
	int size,i,t,limit,c=0;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	if (size%2==0)
		limit=size/2-1;
	else
		limit=size/2;
	for (i=0;i<=limit;i++)
	{
		if (arr[i]==arr[size-1-i])
			c++;
	}
	if (size%2==0)
		printf("Condition is followed at %d times",c);
	else
		printf("Condition is followed at %d times",c-1);
	return 1;
}
