#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&a);
	printf("\n enter second number...");
	scanf("%d",&b);
	c=a>b , d=a<b , e=a>=b , f=a<=b , g=a==b, h=a!=b;
	printf("\n a>b= %d",c);
	printf("\n a<b= %d",d);
	printf("\n a>=b= %d",e);
	printf("\n a<=b= %d",f);
	printf("\n a==b= %d",g);
	printf("\n a!=b= %d",h);
	getch();

}
