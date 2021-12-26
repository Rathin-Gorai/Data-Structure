#include<stdio.h>
int sum(int x,int y)
{
	int c;
	c=x+y;
	return (c);
}
int main()
{
	int a,b,ver;
	a=20;
	b=24;
	ver= sum(a,b);
	printf("sum=%d",ver);
	return 0;
}

	