#include<stdio.h>
#define CAPITAL(c) ((c>=65 && c<=90)?1:0)
#define SMALL(c) ((c>=97 && c<=122)?1:0)
#define LETTER(c) ((CAPITAL(c) || SMALL(c))?1:0)
#define BIGGER(d,e) (d>e?d:e)
int main()
{
	char c;
	printf("Enter an alphabet: ");
	scanf("%c",&c);
	if (CAPITAL(c))
		printf("%c is a capital letter\n",c);
	else if (SMALL(c))
		printf("%c is a small letter\n",c);
	else if (LETTER(c)==0)
		printf("%c is not a letter\n",c);
	int i,j,max;
	printf("Enter two numbers: ");
	scanf("%d %d",&i,&j);
	max=BIGGER(i,j);
	printf("%d is bigger",max);
	return 1;
}
