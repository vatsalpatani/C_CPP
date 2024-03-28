#include<stdio.h>
#include<conio.h>
int add();
void main()
{
	int n;
	clrscr();
	n=add();
	printf("\n answer=%d",n);
	getch();
}
int add()
{
	int a,b,c;
	printf("\n enter the first number ");
	scanf("%d",&a);
	printf("\n enter the second number ");
	scanf("%d",&b);
	c=a+b;
	return c;
}