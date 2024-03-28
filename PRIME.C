#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c=0;
	clrscr();
	printf("enter n..");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	printf("prime");
	else
	printf("not prime");
	getch();
}
