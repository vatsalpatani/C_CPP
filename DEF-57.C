#include<stdio.h>
#include<conio.h>
void main()
{
	int n,min=0,max=0;
	clrscr();
	printf("enter n (-999 to terminate...)");
	do
	{
		scanf("%d",&n);
		if(n!=-999)
		{
			if(max<n)
			max=n;
			else if(n<min)
			min=n;
		}
	}
	while(n!=-999);
	printf("\nmin = %d \t max = %d",min,max);
	getch();

}