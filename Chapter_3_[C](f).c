#include<stdio.h>
int main()
{
	int r,s,a;
	printf("Enter the age of :\n");
	printf("Ram: ");
	scanf("%d",&r);
	printf("Shyam: ");
	scanf("%d",&s);
	printf("Ajay: ");
	scanf("%d",&a);//assuming that none of them have equal age because then the question of youngest would not have been asked
	if (r<s && r<a)
		printf("Ram is the youngest");
	else if (s<r && s<a)
		printf("Shyam is the youngest");
	else if (a<s && a<r)
		printf("Ajay is the youngest");
	return 1;
}
