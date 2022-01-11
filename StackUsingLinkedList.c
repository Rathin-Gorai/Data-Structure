/*1. Write a program in c to perform all operations of stack using linked list.*/
#include<stdio.h>
#include<stdlib.h>
//-----------------------
struct node
{
	int data;
	struct node *next;
};
//functions--------------
void pop();
void push();
void display();
//----------------------
int main()
{
	int ver=0;
	while(ver!=4)
	{
		printf("[1]->POP \n[2]->PUSH \n[3]->Display \n[4]->Exit");
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

void pop(){
	//55555
}

void push(){
	//5555
}

void display(){
	//555
}