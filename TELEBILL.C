#include<stdio.h>
#include<conio.h>
void main()
{
	int c,rent=500;
	float cc,tax,amt;
	clrscr();
	printf("\n enter total no of calls...");
	scanf("%d",&c);
	if(c<=100)
		cc=0;
	else if(c<=300)
		cc=(c-100)*1.10;
	else
		cc=(c-300)*1.20+220;
	tax=(rent+cc)*12.33/100;
	amt=cc+tax+rent;
	printf("\n bill amount is...%f",amt);
	getch();
}