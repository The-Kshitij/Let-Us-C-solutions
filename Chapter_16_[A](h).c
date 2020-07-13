#include<stdio.h>
#include<strings.h>
int main()
{
	int i,j,k,m,c=0;
	char s[50];
	char vow[]={'a','e','i','o','u'};
	printf("Enter the sentence: ");
	gets(s);
	for (i=0;i<strlen(s)-1;i++)
	{
		for (j=0;j<5;j++)
		{
			if (s[i]==vow[j])
			{	
				for (k=0;k<5;k++)
					if (s[i+1]==vow[k])
					{
						c++;
						break;
					}
			break;
			}
		}
	}
	printf("%d times",c);
	return 1;
}
