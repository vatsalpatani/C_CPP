#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char c;
	clrscr();
	printf("\n enter a charecter...");
	scanf("%c",&c);
	if(isupper(c))
		c=tolower(c);
	else if(islower(c))
		c=toupper(c);
	printf("now c = %c",c);
	getch();
}