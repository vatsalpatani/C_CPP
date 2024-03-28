//input values in 2D array write a program to print it...
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],i,j,sum=0,sum1=0;
	clrscr();
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter a[%d][%d]...",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		sum=0;
		sum1=0;
		for(j=0;j<2;j++)
		{
			sum+=a[j][i];
			sum1+=a[i][j];
		}
		printf("\ncolumn[%d] sum = %d",i,sum);
		printf("\nrow sum[%d] = %d",i,sum1);
	}

	getch();
}