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
node *del();
void show();
int main()
{
	int choice;
	node *t;
	while (1)
	{
		printf("\n\n1-Add \n2-Delete \n3-Show \n4-Exit\nSelect an option: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				t=insert(t);
				break;
				
			case 2:
				t=del(t);
				break;
				
			case 3:
				show();
				break;
				
			case 4:
				exit(0);
			
			default:
				printf("!!INVALID OPTION!!\n");
		}
	}
}
node  *insert(node *t)
{
	t=(node *)malloc(sizeof(node));
	if (first==NULL)
	{
		first=last=t;
		printf("Enter a number: ");
		scanf("%d",&last->number);
		last->next=NULL;
		c++;
	}
	else
	{
		last->next=t;
		printf("Enter a number: ");
		scanf("%d",&t->number);
		last=t;
		c++;
		last->next=NULL;
	
	}
	return last;
}
void show()
{
	node *t;
	for (t=first;t!=NULL;t=t->next)
		printf("%d ",t->number);
	printf("\n");
}
node *del(node *t)
{
	node *p;
	for (p=first;p->next!=t;p=p->next)
		;
	p->next=NULL;
	last=p;
	return last;
}
