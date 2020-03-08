#include<stdio.h>
struct emp
{
	int code;
	char name[50];
	int day,month,year;
};
int main()
{
	int i,yr,size,flag=0;
	printf("Enter the size: ");
	scanf("%d",&size);
	struct emp e[size];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter your name: ");
		gets(e[i].name);
		printf("Enter your code: ");
		scanf("%d",&e[i].code);
		printf("Enter the Date Of Joining(don't enter number like 01,02 etc.): ");
		scanf("%d-%d-%d",&e[i].day,&e[i].month,&e[i].year);
	}
	printf("Enter the current year: ");
	scanf("%d",&yr);
	for (i=0;i<size;i++)
	{
		if (yr-e[i].year>=3)
		{
			printf("%s\nCode: %d  Date of Joining: %d-%d-%d\n",e[i].name,e[i].code,e[i].day,e[i].month,e[i].year);
			flag=1;
		}
	}
	if (flag==0)
		printf("!!No Records Found!!\n");
	return 1;
}
