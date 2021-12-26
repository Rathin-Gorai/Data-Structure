#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	system("color 2");
	int n,m,o,p;
	char c;
	printf("\n\t                    ||`        '||                   '||      \n\t                    ||          ||                    ||      \n\t`||''|,  .|''|, .|''||  .|''|,  ||''|, .|''|, .|''|,  || //`  \n\t ||  ||  ||  || ||  ||  ||..||  ||  || ||  || ||  ||  ||<<    \n\t.||  ||. `|..|' `|..||. `|...  .||..|' `|..|' `|..|' .|| \\. ");
	printf("\n\n\t\t\t\t\t\t      ~Rathin Gorai");
	printf("\n\n\t\t[1]-> Create a Note\n\t\t[2]-> Insert Node\n\t\t[3]-> Print the list \n\t\t[4]-> Exit\n");
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
			case 2: 
			system("second");
			break;
		}
		break;
		case 2:
		system("cls");
		printf("You Choose Insert Node\n");
		printf("\n[1]-> Add New Node \n[2]-> Back");
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
				//add 
				break;
				case 'b':
				//add 
				break;
				case 'c':
				//add 
				break;
				case 'd':
				system("cls");
				system("second");
				break;
			}
			break;
			case 2: 
			system("second");
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
			system("second");
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
		
	return 0;
}
	