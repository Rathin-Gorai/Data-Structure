#include<stdio.h>
#include<stdlib.h>
//-----------------
int top = -1,n=0,arr[100];
void pop();
void push();
void display();
//------------------
int main()
{
	int ver=0,z;
	printf("Enter the number of elements in the stack "); 
	scanf("%d",&n);
	while(ver!=4)
	{
		printf("Chose your operation");
		printf("\n[1]->POP \n[2]->PUSH \n[3]->Display");
		printf("\n>>>");
		scanf("%d",&z);
		switch(z)
		{
			case 1:
			{
				pop();
				break;
			}
			case 2:
			{
				push();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default:
			printf("Wrong Input");
			
		}
	}
}
void pop()
{
	if(top==-1)
		printf("\nUnderflow");
	else
	{
		top=top-1;
	}
		
}
void push()
{ 
	int val; 
	if (top ==n)  
		printf("\n Overflow"); 
	else 
	{ 
	printf("Enter the value?"); 
	scanf("%d",&val); 
	top= top+1; 
	arr[top]= val;
	} 
}
void display()
{ 
	for (int i=top;i>=0;i--)
	{ 
		printf("%d\n",arr[i]); 
	} 
	if(top == -1) 
	{ 
		printf("Stack is empty"); 
	} 
}