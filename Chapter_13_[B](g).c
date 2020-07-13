#include<stdio.h>
void modify(int arr[],int size);
int main()
{
	int size=10,arr[size],i;
	for (i=0;i<size;i++)
	{
		printf("Enter the element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	modify(arr,size);
	printf("After modifying:\n");
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 1;
}
void modify(int arr[],int size)
{
	int i;
	for (i=0;i<size;i++)
		arr[i]=arr[i]*3;
}
