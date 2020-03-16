#include"interest.h"
int main()
{
	int n;
	float p,r,si,amnt;
	printf("Enter the principal,number of years and rate of interest: ");
	scanf("%f %d %f",&p,&n,&r);
	si=SI(p,n,r);
	printf("Simple Interest: %f\n",si);
	amnt=AMNT(p,si);
	printf("Amount: %f",amnt);
	return 1;
}
