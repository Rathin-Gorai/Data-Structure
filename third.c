#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],b[3][3];
	system("cls");
	system("color 2");
	printf("\n\t_|      _|    _|_|    _|_|_|_|_|  _|_|_|    _|_|_|  _|      _|  \n\t_|_|  _|_|  _|    _|      _|      _|    _|    _|      _|  _|    \n\t_|  _|  _|  _|_|_|_|      _|      _|_|_|      _|        _|      \n\t_|      _|  _|    _|      _|      _|    _|    _|      _|  _|    \n\t_|      _|  _|    _|      _|      _|    _|  _|_|_|  _|      _|  ");
	printf("\n\n\t\t\tOperation Of two matrix (3x3)");
	printf("\n\n\t\t\t\t\t\t\t~Rathin Gorai");
	printf("\nInput the first matrix values\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Element a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nInput the Second matrix values\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Element a[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	system("cls");
	printf("\n\t_|      _|    _|_|    _|_|_|_|_|  _|_|_|    _|_|_|  _|      _|  \n\t_|_|  _|_|  _|    _|      _|      _|    _|    _|      _|  _|    \n\t_|  _|  _|  _|_|_|_|      _|      _|_|_|      _|        _|      \n\t_|      _|  _|    _|      _|      _|    _|    _|      _|  _|    \n\t_|      _|  _|    _|      _|      _|    _|  _|_|_|  _|      _|  ");
	printf("\n\n\t\t\tOperation Of two matrix (3x3)");
	printf("\n\n\t\t\t\t\t\t\t~Rathin Gorai");
	//printf("Choose you want to do");
	printf("\n\t[1]->Add\n\t[2]->Subtract\n\t[3]->Multiplication\n\t[4]->Reload");
	int z;
	printf("\n\nSelect one~>");
	scanf("%d",&z);
	int c[3][3];
	switch (z)
	{
		case 1:
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j]= a[i][j] + b[i][j];
				}
			}
			printf("The Sum of the matrix are:");
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					printf("\nelement sum[%d][%d]=%d",i,j,c[i][j]);
				}
			}	
		}
		break;
		case 2:
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j]= a[i][j] - b[i][j];
				}
			}
			printf("The Subtract of the matrix are:");
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					printf("\nelement [%d][%d]=%d",i,j,c[i][j]);
				}
			}	
		}			
		break;
		case 3:
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j]= a[i][j] * b[i][j];
				}
			}
			printf("The Multiplication of the matrix are:");
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					printf("\nelement [%d][%d]=%d",i,j,c[i][j]);
				}
			}	
		}
		break;
		case 4:
		{
			system("third");
			break;
		}
				
	}
	return 0;
}