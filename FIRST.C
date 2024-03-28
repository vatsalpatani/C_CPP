#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	clrscr();
	printf("\n enter a number ....");
	scanf("%d",&a);
	a==0?printf("zero"):a%2==0?printf("even"):printf("odd");
	getch();

}
