#include<stdio.h>
int main()
{
	int hr,min;
	for (hr=0;hr<24;hr++)
	{
		for (min=0;min<=59;min++)
		{
			if (hr==0 && min==0)
				printf("Midnight\n");
			else if (hr==0)
			{
				if (min<10)
					printf("%d:0%d AM\n",hr,min);
				else
					printf("%d:%d AM\n",hr,min);
			}
			else if (hr<12)
			{
				if (min<10)
					printf("%d:0%d AM\n",hr,min);
				else
					printf("%d:%d AM\n",hr,min);
			}
			else if (hr==12 && min==0)
				printf("Noon\n");
			else if (hr==12)
			{
				if (min<10)
					printf("%d:0%d PM\n",hr,min);
				else
					printf("%d:%d PM\n",hr,min);
			}
			else if (hr>12)
			{
				if (min<10)
					printf("%d:0%d PM\n",hr,min);
				else
					printf("%d:%d PM\n",hr,min);
			}
		}
	}
	return 1;
}
