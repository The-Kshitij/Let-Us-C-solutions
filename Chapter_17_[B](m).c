#include<stdio.h>
struct players
{
	char name[50];
	int sums;
};
int main()
{
	int i,j,size=5,s,max;
	struct players p[size];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter the name of the player: ");
		gets(p[i].name);
		p[i].sums=0;
		for (j=0;j<3;j++)
		{
			printf("Enter the rank you would like to assign: ");
			scanf("%d",&s);
			p[i].sums+=s;
		}
	}
	max=p[0].sums;
	for (i=0;i<size;i++)
		if (p[i].sums>max)
			max=p[i].sums;
	for (i=0;i<size;i++)
		if (p[i].sums==max)
		{
			printf("Winner: %s",p[i].name);
			break;
		}
	return 1;
}
