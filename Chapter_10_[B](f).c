#include<stdio.h>
void game(int n,char s,char a,char e);
int main()
{
	int n=4;
	game(n,'A','B','C');
	return 0;
}
void game(int n,char s,char a,char e)
{
	if (n==1)	
		printf("Go from %c to %c\n",s,e);
	else
	{
		game(n-1,s,e,a);
		game(1,s,' ',e);
		game(n-1,a,s,e);
	}
}
