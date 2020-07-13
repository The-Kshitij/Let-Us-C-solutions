#include<stdio.h>
#include<strings.h>
int main()
{
	int i,c=0;
	char line[50];
	char line2[50];
	printf("Enter the line: ");
	gets(line);
	for (i=0;i<strlen(line);i++)
	{
		if (i+2<strlen(line))
		{
			if (line[i]=='t' && line[i+1]=='h' && line[i+2]=='e')
				i=i+2;
			else
				line2[c++]=line[i];
		}
		else
			line2[c++]=line[i];
	}
	printf("%s",line2);
	return 1;
}
