#include<stdio.h>
#include<strings.h>
struct emp
	{
		char name[30];
		int age;
		float bs;
	};
	struct emp e1,e2;
int  main()
{
	FILE *fp;
	fp=fopen("EMPLOYEE.DAT","w");
	e1.age=18;
	e1.bs=23.567;
	strcpy(e1.name,"Kshitij Tripathi");
	fprintf(fp,"%s %d %f",e1.name,e1.age,e1.bs);
	fclose(fp);
	fp=fopen("EMPLOYEE.DAT","r");
	while (fscanf(fp,"%s %d %f",e2.name,&e2.age,&e2.bs)!=EOF);
	fclose(fp);
	printf("%d\n",sizeof(e2));
	printf("%s \n%d\t%f",e2.name,e2.age,e2.bs);
	return 1;
}
