#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,a=0;
	float avg;
	clrscr();
	printf("\nenter numbers (enter 111 for termination\n");
	for(i=1;n!=111;i++)
	{
		scanf("%d",&n);
		sum+=n;
		a++;
	}
	printf("\nsum = %d",sum);
	avg=(float)sum/a;
	printf("\naverage = %.2f",avg);
	getch();
}