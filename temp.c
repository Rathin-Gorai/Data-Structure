#include<stdio.h>  
#include<conio.h>
int add(int, int); // function prototype  
  
int main()  
{  
    int a, b,c;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &a, &b);  
	c= add(a,b);
    //function call add(a, b);  
    printf("%d + %d = %d\n", a, b, c);  
  
    return 0;
	getch();	
}  
  
//function definition  
int add(int x, int y)  
{  
	int sum;
	sum=x+y;
    return(sum);  
} 