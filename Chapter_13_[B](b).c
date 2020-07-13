#include<stdio.h>
int main()
{
	int i,size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int arr2[size];
	for (i=0;i<size;i++)
		arr2[i]=arr[size-1-i];
	printf("The elements are: \n");
	for (i=0;i<size;i++)
		printf("%d ",arr2[i]);
	return 1;
}
