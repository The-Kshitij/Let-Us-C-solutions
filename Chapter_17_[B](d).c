#include<stdio.h>
struct player
{
	char name[50];
	float avg;
	int test;
	int age;
};
int main()
{
	int i,j,size=20;
	struct player p[size];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter the name: ");
		gets(p[i].name);
		printf("Enter %s's age: ",p[i].name);
		scanf("%d",&p[i].age);
		printf("Enter the number of test matches: ");
		scanf("%d",&p[i].test);
		printf("Enter the average runs scored in each match: ");
		scanf("%f",&p[i].avg);
	}
	//qsort is a library function which uses quick sorting.You can use it,but I have decided not to use it
	float arrange_records[size];
	float t;
	for (i=0;i<size;i++)
		arrange_records[i]=p[i].avg;
	for (i=0;i<size;i++)
		for (j=0;j<i;j++)
			if (arrange_records[i]<arrange_records[j])
			{
				t=arrange_records[i];
				arrange_records[i]=arrange_records[j];
				arrange_records[j]=t;
			}
	for (i=0;i<size;i++)
		for (j=0;j<size;j++)
			if (arrange_records[i]==p[j].avg)
			{
				printf("%s\n Age: %d  Average Runs: %f  Number Of Test Matches: %d\n",p[j].name,p[j].age,p[j].avg,p[j].test);
				break;
			}
	return 1;
}
