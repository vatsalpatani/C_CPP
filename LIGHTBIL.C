#include<stdio.h>
#include<conio.h>

void main()
{
	float u,a,b,c,d,e,f;
	clrscr();
	printf("\n enter your total unit...");
	scanf("%f",&u);
	a=u-50;
	b=50*2.70;
	a=a-50;
	c=50*3.60;
	a=a-100;
	d=100*4.10;
	e=a*4.70;
	f=b+c+d+e;
	printf("\n your total bill is .... %f",f);
	getch();
}