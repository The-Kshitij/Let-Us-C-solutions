#include<stdio.h>
int main()
{
	int i,f;
	printf("Enter your grade: ");
	scanf("%d",&i);
	printf("Enter the number of subjects in which you have failed: ");
	scanf("%d",&f);
	
	switch (i)
	{
		case 1:
			if (f>3)
				printf("You are not eligible for grace marks.\n");
			else
				printf("You are eligible for 5 grace marks per subject\n");
			break;
			
		case 2:
			if (f>2)
				printf("You are not eligible for grace marks.\n");
			else
				printf("You are eligible for 4 grace marks per subject\n");
			break;
			
		case 3:
			if (f>1)
				printf("You are not eligible for grace marks.\n");
			else
				printf("You are eligible for 5 grace marks\n");
			break;
			
		default:
			printf("!!INVALID GRADE!!");
	}
	return 1;
}
