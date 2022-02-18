#include<stdio.h>
#include<stdlib.h>
//-----------------------
struct node
{
	int data;
	struct node *next;
};
struct node *front;  
struct node *rear;   
//-----------------------
//Function
void enqueue();
void dequeue();
void display();
//----------------------
int main()
{
	int ver;
	while (ver !=4)
	{
		printf("\n\n\t\tChose you want to do\n\t\t[1]->Enqueue \n\t\t[2]->Dequeue \n\t\t[3]->Display \n\t\t[4]->Exit");
		printf("\nEnter the value: ");
		scanf("%d",&ver);
	
			switch (ver)
			{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid input!!");
				break;
			}
	}
	return 0;
}
void enqueue(){
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}
void dequeue(){
struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}

void display(){
 struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}
}

