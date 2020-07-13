#include<stdio.h>
#include<strings.h>
#include<stdio.h>
int main()
{
	
	int i,j,size;
	printf("Enter the number of names: ");
	scanf("%d",&size);
	char arr[size][50],str[50],t[50];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter the name: ");		
		gets(str);
		strcpy(arr[i],str);
	}
	for (i=0;i<size;i++)
	{
		for (j=0;j<i;j++)
		{
			if (strcmp(arr[i],arr[j])<0)
			{
				strcpy(t,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],t);
			}
		}
	}
	for (i=0;i<size;i++)
	{
		printf("%s\n",arr[i]);
	}
	return 1;
}
