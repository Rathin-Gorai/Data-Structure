// Write a program to perform bynary search
#include<stdio.h>
int main()
{
	int element;
	printf("Enter how many number you want to store:");
	scanf("%d",&element);
	int arr[element];
	for(int i=0;i<element;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Elements are:");
	for(int i=0;i<element;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
	

	
	