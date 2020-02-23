#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the maks of following\nSubject 1: ");
	scanf("%f",&a);
	printf("Subject 2: ");
	scanf("%f",&b);
	printf("Subject 3: ");
	scanf("%f",&c);
	printf("Subject 4: ");
	scanf("%f",&d);
	printf("Subject 5: ");
	scanf("%f",&e);
	printf("Aggregate Marks: %f\n",(a+b+c+d+e)/5);
	printf("%%%f in Subject 1\n",a);//two % signs are used to display %
	printf("%%%f in Subject 2\n",b);
	printf("%%%f in Subject 3\n",c);
	printf("%%%f in Subject 4\n",d);
	printf("%%%f in Subject 5\n",e);
	return 1;
}
