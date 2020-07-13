#include<stdio.h>
int main()
{
	int i,j,size;
	printf("Enter the number of elements(even only): ");//to have the same number of odd and even elements
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter the array element%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("You have entered: \n");
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	int arr1[size/2],arr2[size/2];//to store even numbers in arr1 and odd numbers in arr2
	int e=0,o=0;
	for (i=0;i<size;i++)
	{
		if (arr[i]%2==0)
		{
			arr1[e]=arr[i];
			e++;
		}
		else
		{
			arr2[o]=arr[i];
			o++;
		}
	}
	e=0;o=0;
	for (i=0;i<size;i++)
	{
		if (arr[i]%2==0)
		{
			arr[i]=arr2[o];
			o++;
		}
		else
		{
			arr[i]=arr1[e];
			e++;
		}
	}
	printf("After exchanging the odd and even eLements: \n");
	for (i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 1;
}
