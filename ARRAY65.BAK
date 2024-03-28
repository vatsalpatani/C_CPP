#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,c;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter a[%d]..",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\nnow a[%d] = %d",i,a[i]);
	}
	getch();
}