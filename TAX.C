#include<stdio.h>
#include<conio.h>

void main()
{
	long int in;
	clrscr();
	printf("\n enter your income...");
	scanf("%ld",&in);
	in<=110000?printf("your tax is nil"):
	in<=150000?printf("your tax is...%ld",(in-110000)*10/100):
	in<=300000?printf("your tax is...%ld",(in-150000)*20/100):
	in<=500000?printf("your tax is...%ld",(in-300000)*30/100):
	printf("your tax is...%ld",(in-500000)*40/100);
	getch();
}