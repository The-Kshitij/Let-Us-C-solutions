#include<stdio.h>
#include<strings.h>
int main()
{
	int i;
	char t;
	char *p[]={"gnirts eht si sihT "};
	char s[strlen(*p)];
	strcpy(s,*p);
	for (i=0;i<strlen(s)/2;i++)
	{
		t=s[i];
		s[i]=s[strlen(s)-i-1];
		s[strlen(s)-1-i]=t;
	}
	printf("%s",s);
	return 1;
}
