#include<stdio.h>
struct student
{
	int roll;
	char name[50];
	char course[50];
	int year;
};
void particular_year(struct student stud[],int size);
void particular_roll(struct student stud[],int size,int roll_number);
int main()
{
	int i,size,r_n;
	printf("Enter the number of students: ");
	scanf("%d",&size);
	struct student stud[size];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter the name: ");
		gets(stud[i].name);
		fflush(stdin);
		printf("Enter the course: ");
		gets(stud[i].course);
		printf("Enter the roll number: ");
		scanf("%d",&stud[i].roll);
		printf("Enter the year of joining: ");
		scanf("%d",&stud[i].year);
	}
	particular_year(stud,size);
	printf("Enter a roll number: ");
	scanf("%d",&r_n);
	particular_roll(stud,size,r_n);
	return 1;
}
void particular_year(struct student stud[],int size)
{
	int i,yr,flag=0;
	printf("Enter a year to know the names of the student who joined on that year: ");
	scanf("%d",&yr);
	for (i=0;i<size;i++)
	{
		if (stud[i].year==yr)
		{
			printf("%s\n",stud[i].name);
			flag=1;
		}
	}
	if (flag==0)
		printf("!!No Students Found!!\n");
}
void particular_roll(struct student stud[],int size,int roll_number)
{
	int i,flag=0;
	for (i=0;i<size;i++)
	{
		if (stud[i].roll==roll_number)
		{
			printf("%s \nCourse: %s\tRoll Number: %d\tYear Of Joining: %d",stud[i].name,stud[i].course,stud[i].roll,stud[i].year);
			flag=1;
		}
	}
	if (flag==0)
		printf("!!No Students Found!!\n");
}
