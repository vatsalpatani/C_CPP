#include<stdio.h>
#include<conio.h>
void main()
{
	long in;
	float tax;
	clrscr();
	printf("\nenter your annual income...");
	scanf("%ld",&in);
	if(in<=110000)
		tax=0;
	else if(in<=150000)
		tax=(in-110000)*10/100;
	else if(in<=300000)
		tax=(in-150000)*20/100+4000;
	else if(in<=500000)
		tax=(in-300000)*30/100+34000;
	else
		tax=(in-500000)*40/100+94000;
	printf("\n your total payable tax is...%.2f",tax);
	getch();
}