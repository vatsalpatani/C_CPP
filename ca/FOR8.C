#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter n..");
	scanf("%d",&n);
	for(i=4;i<=n;i+=4)
	{
		printf("\n%d",i);
	}
	getch();
}