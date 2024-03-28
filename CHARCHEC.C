#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("enter a character...");
	scanf("%c",&c);
	if(c>=65 && c<=90)
		printf("in uppercase...");
	else if(c>=97 && c<=122)
		printf("in lowercase...");
	else if(c>=48 && c<=57)
		printf("in digit...");
	else if(c==32)
		printf("space...");
	else
		printf("symbol...");
	getch();
}