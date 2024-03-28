#include<stdio.h>
#include<conio.h>

void main()
{
	float u;
	clrscr();
	printf("\n enter your total unit...");
	scanf("%f",&u);
	u<=50?printf("bill is...%f",(u-50)*2.70):
	u>=51 && u<=100?printf("bill is...%f",50*2.70 + (u-50)*3.60):
	u>=101 && u<=200?printf("bill is...%f",50*2.70 + 50*3.60 + (u-100)*4.10):
	printf("bill is...%f",50*2.70 + 50*3.60 + 100*4.10 + (u-200)*4.70);
	getch();
}