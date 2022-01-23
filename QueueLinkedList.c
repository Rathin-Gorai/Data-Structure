#include<stdio.h>
#include<stdlib.h>
//-----------------------
struct node
{
	int data;
	struct node *next;
};
struct node *head;
//-----------------------
//Function
void enqueue();
void dequeue();
void display();
//----------------------
int main()
{
	int ver;
	printf("\n\n\t\tChose you want to do\n\t\t[1]->Enqueue \n\t\t[2]->Dequeue \n\t\t[3]->Display \n\t\t[4]->Exit");
	printf("\nEnter the value: ");
	scanf("%d",&ver);
	while (ver !=4)
	{
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
		}
	}
	return 0;
}
void enqueue(){

}
void dequeue(){

}

void display(){

}