#include<stdio.h>
#include<conio.h>

void main()
{
	float r,d,p;
	clrscr();
	printf("\n enter the value of rupees...");
	scanf("%f",&r);
	d=r/73.0;
	p=r/95.0;
	printf("\n dollar = %f",d);
	printf("\n pound = %f",p);
	getch();
}