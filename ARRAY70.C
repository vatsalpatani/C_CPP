#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a[5];
	int i,b=0,c=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter a[%d]...",i);
		cscanf("%c",&a[i]);
		if(isupper(a[i]))
		b++;
		else
		c++;
	}
	printf("\nuppercase = %d \nlowercase = %d",b,c);
	getch();
}