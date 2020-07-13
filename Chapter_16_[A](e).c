#include<stdio.h>
#include<strings.h>
int main()
{
	int i,j,k;
	char sen[80];
	printf("Enter the sentence: ");
	gets(sen);
	for (j=0;sen[j]!='\0';j++)
		for (i=0;i<j;i++)
		{
			if (sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
			{
				for (k=i;sen[k]!='\0';k++)
					sen[k]=sen[k+1];
				sen[k]='\0';
			}
			else
				continue;
		}
	printf("%s",sen);
	return 1;
}
