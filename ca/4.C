#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("\n enter 5 numbers..");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e)
		printf("largest number is..%d",a);
	else
	if(b>a && b>c && b>d && b>e)
		printf("largest number is..%d",b);
	else
	if(c>a && c>b && c>d && c>e)
		printf("largest number is..%d",c);
	else
	if(d>a && d>b && d>c && a>e)
		printf("largest number is..%d",d);
	else
		printf("largest number is..%d",e);
	getch();
}