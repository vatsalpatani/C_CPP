#include<stdio.h>
#include<conio.h>
void main()
{
	char a[2],b[2];
	int i;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("\nenter a[%d]..",i);
		cscanf("%c",&a[i]);
		printf("\nenter b[%d]..",i);
		cscanf("%c",&b[i]);
	}
	for(i=0;i<2;i++)
	{
		if(a[i]==b[i])
		printf("\na[%d] and b[%d] are same",i,i);
		else
		printf("\na[%d] and b[%d] are not same",i,i);
	}
	getch();
}