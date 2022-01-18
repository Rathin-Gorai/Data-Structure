//Write a c program to perform all operation of Queue using array
#include<stdio.h>
#include<stdlib.h>
//functions ---------------
void enqueue();
void dequeue();
void display();
//--------------------------
int front = -1, rear = -1,size=5;  
int queue[5];  

void main ()
{
	int ver;
	system("cls");
	system("color 2");
	printf("\n\t\t.oPYo.               -@Rathin_Gorai\n\t\t8    8                              \n\t\t8    8  o    o .oPYo. o    o .oPYo. \n\t\t8  d.8  8    8 8oooo8 8    8 8oooo8 \n\t\t8  `b8. 8    8 8.     8    8 8.     \n\t\t`YooP'P `YooP' `Yooo' `YooP' `Yooo' ");
	//printf("\n\t\t\t\t\t-@Rathin_Gorai");
	while (ver !=4)
	{
		printf("\n\n\t\tChose you want to do\n\t\t[1]->Enqueue \n\t\t[2]->Dequeue \n\t\t[3]->Display \n\t\t[4]->Exit");
		printf("\n->>");
		scanf("%d",&ver);
		switch(ver)
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
			printf("\nInvalid Option !");
		}
	}
}

void enqueue()
{
	int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == size-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
}

void dequeue()
{
	int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }
}

void display()
{
	int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
}