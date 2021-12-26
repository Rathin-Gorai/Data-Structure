#include<stdio.h>
void push_element();
void pop_element();
void display_all();
void main()
{
	int ver;
	while(ver!=4)
	{
		printf("Chose one of that:");
		printf("\n[1]->Push \n[2]->Pop \n[3]->Show All \n[4]Exit");
		printf("\n=>>");
		scanf("%d",&ver);
		switch (ver)
		{
			case 1:
			push_element();
			break;
			case 2:
			pop_element();
			break;
			case 3:
			display_all();
			break;
			case 4:
			printf("Good By\nHave a Great day");
			exit(0);
			break;
		}
	}
}

