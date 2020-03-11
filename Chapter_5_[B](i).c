#include<stdio.h>
int main()
{
	int max,min,num;
	printf("Enter the number(enter -1024 to stop): ");
	scanf("%d",&num);
	if (num==-1024)
		printf("Range: 0");
	else
	{
		min=num;
		max=num;
		while (num!=-1024)
		{
			printf("Enter the number: ");
			scanf("%d",&num);
			if (num>max)
				max=num;
			else if (num==-1024)
				continue;
			else if (num<min)
				min=num;
		}
		printf("Range: %d",max-min);
	}
	return 1;
}
