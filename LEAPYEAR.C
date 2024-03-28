#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&n);
	n%4==0?printf("this year is leap year"):printf("this year is not leap year");
	getch();
}
