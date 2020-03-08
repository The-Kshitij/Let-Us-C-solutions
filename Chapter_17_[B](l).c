#include<stdio.h>
struct hur
{
	int lows;
	int highs;
	char category[3];
};
int main()
{
	int ws,flag=0,i;
	struct hur h[]={
	{74,95,"I"},
	{96,110,"II"},
	{111,130,"III"},
	{131,155,"IV"},
	{155,0,"V"}
	};
	printf("Enter the wind speed: ");
	scanf("%d",&ws);
	for (i=0;i<4;i++)
	{
		if (ws>=h[i].lows && ws<=h[i].highs)
		{
			printf("Category %s",h[i].category);
			flag=1;
		}
		
	}
	if (flag==0)
		printf("Category V");
	return 1;
}
