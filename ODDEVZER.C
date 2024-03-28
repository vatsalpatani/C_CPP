#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&n);
	n==0?printf("zero"):n%2==0?printf("even"):printf("odd");
	getch();
}
