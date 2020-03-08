#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	int number;
	struct linked_list *next;
};
typedef struct linked_list node;
node *first=NULL;
node *last=NULL;
int c=0;
node *insert(node *t);
void show();
int main()
{
	int choice;
	node *t;
	while (1)
	{
		printf("\n1-Add \n2-Show \n3-Exit\nSelect an option: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				t=insert(t);
				break;
				
			case 2:
				if (c==0)
					printf("!!Empty!!\n");
				else
					show();
				break;
				
			case 3:
				exit(0);
			
			default:
				printf("!!INVALID OPTION!!\n");
		}
	}
}
node *insert(node *t)
{
	t=(node *)malloc(sizeof(node));
	if (first==NULL)
	{
		first=last=t;
		printf("Enter a number: ");
		scanf("%d",&last->number);
		last->next=NULL;
	}
	else
	{
		node *p;
		int i,j,k;
		last->next=t;
		last=t;
		last->next=NULL;
		printf("Enter the number: ");
		scanf("%d",&t->number);
		int arr[c+1];
		for (i=0,p=first;i<c+1,p!=NULL;i++,p=p->next)
			arr[i]=p->number;
		printf("\n");
		for (i=0;i<c+1;i++)
			for (j=0;j<i;j++)
				if (arr[j]>arr[i])
				{
					k=arr[i];
					arr[i]=arr[j];
					arr[j]=k;
				}
		for (i=0,p=first;p!=NULL,i<c+1;p=p->next,i++)
			p->number=arr[i];
	}
	c++;
	return last;
}
void show()
{
	node *t;
	for (t=first;t!=NULL;t=t->next)
		printf("%d ",t->number);
	printf("\n");
}
