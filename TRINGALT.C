#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter first side of tringal...");
	scanf("%d",&a);
	printf("\n enter second side of tringal...");
	scanf("%d",&b);
	printf("\n enter third side of tringal...");
	scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b)
	{
		if(a==b && b==c)
			printf("this is equilateral tringal..");
		else if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
			printf("this is isosceles tringal..");
		else if(a!=b!=c)
			printf("this is scalene tringal...");
	}
	else
		printf("this is not tringal...");
	getch();
}