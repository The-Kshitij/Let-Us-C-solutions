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
node *insert(node *t,char c);
void show();
int main()
{
	int choice;
	node *t;
	while (1)
	{
		printf("\n\n1-Add at the end\n2-Add at a position\n3-Show \n4-Exit\nSelect an option: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				t=insert(t,'n');
				break;
				
			case 2:
				insert(t,'p');
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
node  *insert(node *t,char c)
{
	t=(node *)malloc(sizeof(node));
	if (first==NULL)
	{
		first=last=t;
		printf("Enter a number: ");
		scanf("%d",&last->number);
		last->next=NULL;
		c++;
		return last;
	}
	else
	{
		if (c=='n')
		{
			last->next=t;
			printf("Enter a number: ");
			scanf("%d",&t->number);
			last=t;
			c++;
			last->next=NULL;
			return last;	
		}
		else
		{
			node *p,*k;
			int i,pos;
			printf("Enter the position: ");
			scanf("%d",&pos);
			if (pos==1)
			{
				printf("Enter the number: ");
				scanf("%d",&t->number);
				t->next=first;
				first=t;
			}
			else
			{
				int j;
				for (p=first,i=0;p!=NULL;p=p->next,i++)
				if (i==pos-1)
				{
					printf("Enter the number: ");
					scanf("%d",&t->number);
					t->next=p->next;
					p->next=t;
					j=p->number;
					p->number=t->number;
					t->number=j;				
				}
			}
		}
	}
}
void show()
{
	node *t;
	for (t=first;t!=NULL;t=t->next)
		printf("%d ",t->number);
	printf("\n");
}
