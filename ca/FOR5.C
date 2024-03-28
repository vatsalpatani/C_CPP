#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter n..");
	scanf("%d",&n);
	for(i=0;i<=n;i+=5)
	{
		printf("\n%d",i);
	}
	getch();
}