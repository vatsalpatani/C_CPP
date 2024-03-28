#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	float e;
	clrscr();
	printf("\n enter first subjects marks...");
	scanf("%d",&a);
	printf("\n enter second subjects marks...");
	scanf("%d",&b);
	printf("\n enter third subjects marks...");
	scanf("%d",&c);
	d=a+b+c;
	e=d/3;
	printf("\n total of marks is...%d",d);
	printf("\n average of marks is...%f",e);
	getch();
}