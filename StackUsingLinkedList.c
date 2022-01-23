/*1. Write a program in c to perform all operations of stack using linked list.*/
#include<stdio.h>
#include<stdlib.h>
//-----------------------
struct node
{
	int data;
	struct node *next;
};
struct node *head;


//functions--------------
void pop();
void push();
void display();
//----------------------
int main()
{
	int ver;
	system("color 2");
	system("cls");
	printf("\n\t\t  _|_|_|    _|                          _|    _|    \n\t\t_|        _|_|_|_|    _|_|_|    _|_|_|  _|  _|    \n\t\t  _|_|      _|      _|    _|  _|        _|_|      \n\t\t      _|    _|      _|    _|  _|        _|  _|    \n\t\t_|_|_|        _|_|    _|_|_|    _|_|_|  _|    _|  ");
	printf("\n\t\t\t\t\t\t-@Rathin_Gorai");
	while(ver!=4)
	{
		printf("\n\n\t\tChose You want to Do.\n\t\t[1]->PUSH \n\t\t[2]->POP \n\t\t[3]->Display \n\t\t[4]->Exit");
		printf("\n->>>");
		scanf("%d",&ver);
		switch(ver)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			break;
			default:
			printf("Not a valid number!");
		}
	}
}

void pop()
{
struct node *ptr,*ptr1;
	if(head==NULL)
	{
		printf("\nlist is empty");
	}
	else if(head->next==NULL)
	{
		head =NULL;
		free(head);
		printf("\nOnly node of the list deleted..");
	}
	else
	{
		ptr=head;
		while(ptr->next !=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		free(ptr);
		printf("\nDeleted node from the last..");
	}
}

void push()
{
		struct node *ptr;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node *));
	if (ptr == NULL)
	{
		printf("\n OVERFLOW");
	}
	else 
	{
		printf("Enter value\n");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("\nNode Inserted");
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\nNothing to Print");
	}
	else
	{
		printf("\nPrinting values..\n");
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
}