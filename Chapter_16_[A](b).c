#include<stdio.h>
#include<strings.h>
#include<stdio.h>
int main()
{
	int i,j;
	char str1[50],str3[50],str2[50];
	char *str[]={
	"We will teach you how to",
	"Move a mountain",
	"Level a building",
	"Erase the past",
	"Make a million",
	"All through C"
	};
	for (i=0;i<6;i++)
		printf("%s\n",*(str+i));
	printf("Enter a string: ");
	gets(str1);
	for (i=0;i<6;i++)
	{
		if (strcmp(str1,*(str+i))==0)
		{
			printf("String has been found\n");
			fflush(stdin);//clear the buffer
			printf("Enter a new string to replace the string: ");
			gets(str1);
			*(str+i)=str1;
		}
	}
	for (i=0;i<6;i++)
		printf("%s\n",*(str+i));
	
	return 1;
}
