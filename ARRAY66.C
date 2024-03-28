#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,min,max;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter a[%d]..",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i==0)
		min=max=a[0];
		else if(max<a[i])
		max=a[i];
		else if(a[i]<min)
		min=a[i];
	}
	printf("\nmin = %d \nmax = %d",min,max);
	getch();
}