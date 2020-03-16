#include<stdio.h>
#include<math.h>
int bin();
int main()
{
	int i=0,c=0,num,j=0,num2;
	printf("Enter the number: ");
	scanf("%d",&num);
	num2=num;
	while (num!=0)
	{
		i=num%2;
		c+=pow(10,j)*i;
		j++;
		num=num/2;
	}
	printf("Binary: %d",c);
	printf("\n\nThrough recursion:\n");
	bin(num2,0,0);
	return 1;
}
int bin(int num,int c,int j)
{
	if (num==0)
		printf("Binary Representation: %d",c);
		
	else
	{
		int i=num%2;
		c+=pow(10,j)*i;
		j++;
		num=num/2;
		bin(num,c,j);
	}
}
