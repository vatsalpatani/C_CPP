#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter a[%d]...",i);
		cscanf("%c",&a[i]);
	}
	printf("\nin uppercase");
	for(i=0;i<5;i++)
	{
		a[i]=toupper(a[i]);
		printf("\t%c",a[i]);
	}
	printf("\nin lowercase");
	for(i=0;i<5;i++)
	{
		a[i]=tolower(a[i]);
		printf("\t%c",a[i]);
	}
	printf("\nin propercase");
	for(i=0;i<5;i++)
	{
		if(i==0)
		a[i]=toupper(a[i]);
		else
		a[i]=tolower(a[i]);
		printf("\t%c",a[i]);
	}
	getch();
}