#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	int num;
	struct linked_list *next;
};
typedef struct linked_list node;
node *first=NULL;
node *last=NULL;
int c=0;
node *insert(node *t);
void del();
void show();
int main()
{
	int choice;
	node *t;
	while (1)
	{
		printf("1-Add \n2-Delete \n3-Show\n4-Exit\nSelect an option: ");
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
					del();
				break;
				
			case 4:
				exit(0);
			
			case 3:
				if (c==0)
					printf("!!Empty!!\n");
				else
					show();
				break;
				
			default:
				printf("!!INVALID RESPONSE!!\n");
		}
	}
}
node *insert(node *t)
{
	t=(node *)malloc(sizeof(node));
	printf("Enter the number: ");
	scanf("%d",&t->num);
	if (first==NULL || c==0)
	{
		first=last=t;
		last->next=NULL;
	}
	else
	{
		last->next=t;
		t->next=NULL;
		last=t;
	}
	c++;
	return last;
}
void del()
{
	first=first->next;
	c--;
}
void show()
{
	node *t;
	for (t=first;t!=NULL;t=t->next)
		printf("%d ",t->num);
	printf("\n");
}
