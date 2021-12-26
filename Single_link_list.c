#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
//-------------------------------
struct node *head;
void beginsert();
void lastinsert();
void randominsert();			// function declare
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
//--------------------------------
int main()
{
	system("cls");
	system("color 2");
	int n,m,o,p,q;
	char c;
	while(n!=4)
	{
	//system("cls");
	printf("\n\t                    ||`        '||                   '||      \n\t                    ||          ||                    ||      \n\t`||''|,  .|''|, .|''||  .|''|,  ||''|, .|''|, .|''|,  || //`  \n\t ||  ||  ||  || ||  ||  ||..||  ||  || ||  || ||  ||  ||<<    \n\t.||  ||. `|..|' `|..||. `|...  .||..|' `|..|' `|..|' .|| \\. ");
	printf("\n\n\t\t\t\t\t\t      ~Rathin Gorai");
	printf("\n\n\t\t[1]-> Create a Note\n\t\t[2]-> Node Operation\n\t\t[3]-> Print the list \n\t\t[4]-> Exit\n");
	printf("\n\nChoose You Want to Do: ");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
		system("cls");
		printf("You Choose Creat a Note\n");
		printf("\n[1]-> Add New Note \n[2]-> Back");
		printf("\n\nChoose You Want to Do: ");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
			printf("Enter The Notes");
			break;
			case 3: 
			system("Single_link_list");
			break;
		}
		break;
		case 2:
		system("cls");
		printf("You Choose Insert Node\n");
		printf("\n[1]-> Add New Node \n[2]-> Delete Node\n[3]-> Search\n[4]-> Display\n[5]-> Back");
		printf("\n\nChoose You Want to Do: ");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
			system("cls");
			printf("Enter Where you want to add\n\n[a]->At Begaining\n[b]->At Mid\n[c]->At End\n[d]->Back");
			printf("\n\nChoose One Option: ");
			scanf("%s",&c);
			switch (c)
			{
				case 'a':
				beginsert();
				break;
				case 'b':
				randominsert();
				break;
				case 'c':
				lastinsert();
				break;
				case 'd':
				system("cls");
				system("Single_link_list");
				break;
				default:
				printf("You Chose wrong");
			}
			break;
			case 2:
			printf("\n[1]-> Delete from Begaining\n[2]-> Delete from last\n[3]-> Delete from mid\n[4]-> Back");
			printf("\n\nChoose One Option: ");
			scanf("%d",&q);
			switch(q)
			{
				case 1:
				begin_delete();
				break;
				case 2:
				last_delete();
				break;
				case 3:
				random_delete();
				break;
				case 4:
				system("Single_link_list");
				break;
			}

			case 3: 
			search();
			break;
			case 4:
			display();
			break;
			case 5:
			system("Single_link_list");
			break;
		}
		break;
		case 3:
		system("cls");
		printf("You Choose Print the list");
		printf("\n[1]-> Prited all are.. \n[2]-> Back");
		printf("\n\nChoose You Want to Do: ");
		scanf("%d",&p);
		switch(p)
		{
			case 1:
			printf("Enter The Notes");
			break;
			case 2: 
			system("Single_link_list");
			break;
		}
		break;
		case 4:
		system("cls");
		printf("You Choose Exit\nThank You Good By..");
		exit(0);
		break;
		default:
		printf("Wrong input");
		
	}
	}	
	return 0;
}
void beginsert()
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
void lastinsert()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node *));//1
	if (ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else 
	{
		printf("\nEnter Value\n");
		scanf("%d",&item);
		ptr->data=item;
		if(head ==NULL)
		{
			ptr->next=NULL;
			head = ptr;
			printf("\nNode inserted");
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next = ptr;
			ptr->next=NULL;
			printf("\nNode insertd");
		}
	}
}
void randominsert()
{
	int i,loc,item;
	struct node *ptr , *temp;
	ptr=(struct node *)malloc(sizeof(struct node));
	if (ptr==NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter element Value\n");
		scanf("%d",&item);
		ptr->data=item;
		printf("\nEnter the location after which you want to insert:");
		scanf("%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("\ncan't insert");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\nNode Inserted");
	}
}
void begin_delete()
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
void last_delete()
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
void random_delete()
{
	struct node *ptr,*ptr1;
	int loc,i;
	printf("\nEnter the location of the node after wich you want to perform deletion");
	scanf("%d",&loc);
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;
		if(ptr==NULL)
		{
			printf("\nCan't delete");
			return;
		}
	}
		ptr1->next=ptr->next;
		free(ptr);
		printf("\nDeleted node %d ",loc+1);
}
void search()
{
	struct node *ptr;
	int item,i=0,flag;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\nEmpty list");
	}
	else
	{
		printf("\n\nEner item which you want to search?\n");
		scanf("%d",&item);
		while(ptr!=NULL)
		{
			if(ptr->data ==item)
			{
				printf("\nItem found at location=%d",i+1);
				flag=0;
			}
			else
			{
				flag=0;
			}
			i++;
			ptr=ptr->next;
		}
		if(flag==1)
		{
			printf("\nItem Not found\n");
		}
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