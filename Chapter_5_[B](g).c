#include<stdio.h>
int main()
{
	int pos=0,neg=-1,z=0,num=0;//neg=-1 because you will have to enter -1024 to end the loop so on incrementing neg becomes zero
	while (num!=-1024)
	{
		printf("Enter the number(enter -1024 to stop): ");
		scanf("%d",&num);
		if (num==0)
			z++;
		else if (num<0)
			neg++;
		else
			pos++;
	}
	printf("Positive Numbers: %d\nZeroes: %d\nNegative Numbers: %d",pos,z,neg);
	return 1;
}
