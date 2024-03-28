#include<stdio.h>
#include<conio.h>

void main()
{
	int m,cm;
	float f,i;
	clrscr();
	printf("\n enter value of meter...");
	scanf("%d",&m);
	cm=m*100;
	f=(cm)/30.0;
	i=(cm)/2.50;
	printf("\n centimeter = %d",cm);
	printf("\n feet = %f",f);
	printf("\n inch = %f",i);
	getch();

}