#include<stdio.h>
int main()
{
	int m=21,c;
	while (m!=1)
	{
		printf("Select 1,2,3 or 4 matchsticks: ");
		scanf("%d",&c);
		if (c>4 || c<1)
		{
			printf("!!INVALID CHOICE!!\nSelect 1,2,3 or 4 matchsticks: ");
			scanf("%d",&c);
		}
		m=m-c;
		printf("Computer choses %d matchsticks\n",5-c);
		m=m-(5-c);
		printf("\n%d matchsticks are left\n\n",m);
		if (m==1)
			printf("Only one matchstick left, you lost!!\n");
	}
	return 1;
}
