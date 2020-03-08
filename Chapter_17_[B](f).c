#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
struct lib
{
	int acs;
	char name[50];
	char author[50];
	float price;
	int flag;
};
struct linked_list
{
	struct linked_list *next;
	struct lib l;
};
typedef struct linked_list node;//typedef is used to create a data type,in this case struct linked list.I did this so that I don't have to type struct linked list again and again and can instead use node
node *first=NULL;
node *last=NULL;
int c=0;
node *insert(node *t);
void show();
void search(char name[50],int c);
void sort(int n);
int main()
{
	int choice;
	char name[50];
	node *p=NULL;
	while (1)
	{
		printf("\n\n1-Add a new book  \n2-Display the list of books and it's details \n3-List all books of a given author \n4-Search a specific book \n5-See the number of books \n6-List book in order of accession number: \n7-Exit \nSelect an option: ");
		scanf("%d",&choice);		
		
		switch (choice)
		{
			case 1:
				p=insert(p);
				c++;
				break;
			
			case 2:
				if (c==0)
					printf("!!No Books Found!!\n");
				else
					show();
				break;
				
			case 3:
				fflush(stdin);
				printf("Enter the name of author: ");
				gets(name);
				search(name,1);
				break;
			
			case 4:
				fflush(stdin);
				printf("Enter the name of the book: ");
				gets(name);
				search(name,0);
				break;
	
			case 5:
				if (c==1)
					printf("The library contains a single book\n");
				else
					printf("The library contains %d books\n",c);
				break;
			
			case 6:
				sort(1);
				break;
			
			case 7:
				exit(0);
				break;
			
			default:
				printf("!!INVALID OPTION!!\n");
		}
	}
	return 1;
}
node *insert(node *t)
{
	t=(node *)malloc(sizeof(node));
	if (first==NULL)
	{
		first=last=t;
		fflush(stdin);
		printf(" Enter the name of the book: ");
		gets(t->l.name);
		fflush(stdin);
		printf("Enter the name of the author: ");
		gets(t->l.author);
		printf("Enter the accession number: ");
		scanf("%d",&t->l.acs);
		printf("Enter the price: ");
		scanf("%f",&t->l.price);
		printf("Is the book available(1(Yes)/0(No))");
		scanf("%d",&t->l.flag);
		last->next=NULL;
	}
	else
	{
		last->next=t;
		fflush(stdin);
		printf(" Enter the name of the book: ");
		gets(t->l.name);
		fflush(stdin);
		printf("Enter the name of the author: ");
		gets(t->l.author);
		printf("Enter the accession number: ");
		scanf("%d",&t->l.acs);
		printf("Enter the price: ");
		scanf("%f",&t->l.price);
		printf("Is the book available(1(Yes)/0(No))");
		scanf("%d",&t->l.flag);
		last=t;
		last->next=NULL;
	}
	return last;
}
void show()
{
	node *t;
	for (t=first;t!=NULL;t=t->next)
	{
		printf("  %s\n\tAuthor: %s \n\tAccession Number: %d \n\tPrice: %0.3f  ",t->l.name,t->l.author,t->l.acs,t->l.price);
		if (t->l.flag==1)
			printf("Status: Available\n");
		else
			printf("Status: Unavailable\n");
	}
}
void search(char name[50],int c)
{
	node *t;
	int f=0;
	if (c==1)
	{
		for (t=first;t!=NULL;t=t->next)
		{
			if (strcmp(t->l.author,name)==0)
			{
				printf("  %s\n\tAuthor: %s \n\tAccession Number: %d \n\tPrice: %0.3f  ",t->l.name,t->l.author,t->l.acs,t->l.price);
				if (t->l.flag==1)
					printf("Status: Available\n");
				else
					printf("Status: Unavailable\n");
				f=1;
			}
		}
	}
	else
	{
		for (t=first;t!=NULL;t=t->next)
		{
			if (strcmp(t->l.name,name)==0)
			{
				printf("  %s\n\tAuthor: %s \n\tAccession Number: %d \n\tPrice: %0.3f  ",t->l.name,t->l.author,t->l.acs,t->l.price);
				if (t->l.flag==1)
					printf("Status: Available\n");
				else
					printf("Status: Unavailable\n");
				f=1;
			}
		}
	}
	if (f==0)
		printf("!!Record Not Found!!\n");
}
void sort(int n)
{
	int f=0;
	node *t;
	if (n==1)
	{
		int arr[c],j=0,k,p;
		for (t=first;t!=NULL;t=t->next)
			arr[j++]=t->l.acs;
		for (j=0;j<c;j++)
		{
			for (k=0;k<j;k++)
			{
				if (arr[j]<arr[k])
				{
					p=arr[j];
					arr[j]=arr[k];
					arr[k]=p;
				}
			}
		}
		for (j=0;j<c;j++)
			for (t=first;t!=NULL;t=t->next)
		{
			if (t->l.acs==arr[j])
			{
				printf("  %s\n\tAuthor: %s \n\tAccession Number: %d \n\tPrice: %0.3f  ",t->l.name,t->l.author,t->l.acs,t->l.price);
				if (t->l.flag==1)
					printf("Status: Available\n");
				else
					printf("Status: Unavailable\n");
				f=1;
				break;
			}
		}
	}
}
