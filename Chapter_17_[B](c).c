#include<stdio.h>
struct automobile
{
	int serial_no;
	int year_of_man;
	char material[50];
	int quantity;
};
struct automobile engine[2];
void specific();
void show();
void initialize();
int main()
{
	int i;
	initialize();
	show();
	specific();
	return 1;
}
void specific()
{
	int i,flag=0;
	printf("\nList of parts from BB1 and CC6:\n");
	for (i=0;i<2;i++)
	{
		if ((engine[i].serial_no>=0xbb1)&&(engine[i].serial_no<=0xcc6))
		{
			flag=1;
			printf("Part Number: %d\n",i);
			printf("Serial Number: %d  ",engine[i].serial_no);
			printf("Year Of Manufacturing: %d  ",engine[i].year_of_man);
			printf("Material Used: %s  ",engine[i].material);
			printf("Manufature Quantity: %d\n",engine[i].quantity);
		}
	}
	if (flag==0)
		printf("!!No Records Found!!\n");
}
void show()
{
	int i;
	for (i=0;i<2;i++)
	{
		printf("Part Number: %d\n",i);
		printf("Serial Number: %d  ",engine[i].serial_no);
		printf("Year Of Manufacturing: %d  ",engine[i].year_of_man);
		printf("Material Used: %s  ",engine[i].material);
		printf("Manufature Quantity: %d\n",engine[i].quantity);
	}
}
void initialize()
{
	int i;
	for (i=0;i<2;i++)
	{
		while (1)
		{
			printf("Enter the Serial Number: ");
			scanf("%d",&engine[i].serial_no);
			if (engine[i].serial_no>=0xAA0 && engine[i].serial_no<=0xff9)
				break;
		}
		printf("Enter the Year Of Manufacturing: ");
		scanf("%d",&engine[i].year_of_man);
		printf("Enter the material of the part: ");
		scanf("%s",&engine[i].material);
		fflush(stdin);
		printf("Enter the quantity of the part: ");
		scanf("%d",&engine[i].quantity);
	}
}
