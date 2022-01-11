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
	while(ver!=4)
	{
		printf("\n\nChose You want to Do.\n[1]->POP \n[2]->PUSH \n[3]->Display \n[4]->Exit");
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

void push()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("\nList is Empty\n");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);
		printf("\nNode deleted from the begaining..\n");
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