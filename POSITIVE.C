#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&n);
	n>0?printf("positive"):n<0?printf("nagative"):printf("zero");
	getch();
}
