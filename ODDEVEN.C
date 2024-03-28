#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&n);
	n%2==0?printf("even"):printf("odd");
	getch();
}
