#include<stdio.h>
#include<conio.h>
void sort(int a[]);
void main()
{
	int a[10],i,b;
	clrscr();
	for(i=0;i<10;i++);
	{
		printf("\nenter n..");
		scanf("%d",&a[i]);
	}
	sort(a);
	printf("\nvalue in ascending order");
	for(i=0;i<10;i++)
	{
		printf("%7d",a[i]);
	}
	getch();
}
void sort(int a[])
{
	int i,t,j;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i] > a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}