#include<stdio.h>
#include<conio.h>

void main()
{
	float n;
	clrscr();
	printf("\n enter a number...");
	scanf("%f",&n);
	n>=70?printf("distreaction"):n>=60?printf("first"):n>=50?printf("second"):n>=40?printf("pass"):printf("try again");
	getch();
}
