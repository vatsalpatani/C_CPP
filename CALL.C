#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,d;
	int c;
	clrscr();
	printf("\n enter your total numbers of calls...");
	scanf("%d",&c);
	a=500*12.33/100;
	b=(c*1.10+500)*(0.1233);
	d=(c*1.20+500)*(0.1233);
	c<=100?printf("bill is...%f",a):
	c>=101 && c<=300?printf("bill is...%f",b):printf("bill is...%f",d);
	getch();
}