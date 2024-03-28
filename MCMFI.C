#include<stdio.h>
#include<conio.h>

void main()
{
	int m,cm,a;
	float f,i;
	clrscr();
	printf("\n enter value of meter...");
	scanf("%d",&m);
	printf("\n enter value of centimeter...");
	scanf("%d",&cm);
	a=(m*100)+cm;
	f=a/30;
	a=a%30;
	i=a/2.5;
	printf("\n feet = %f",f);
	printf("\n inch = %f",i);
	getch();

}