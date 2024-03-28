#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h,i;
	clrscr();
	printf("\n enter a number...");
	scanf("%d",&a);
	printf("\n enter second number...");
	scanf("%d",&b);
	c=a&b , d=a|b , e=a^b , f=a>>2 , g=a<<2 , h=~a , i=~b;
	printf("\n a&b= %d",c);
	printf("\n a|b= %d",d);
	printf("\n a^b= %d",e);
	printf("\n a>>2= %d",f);
	printf("\n a<<2= %d",g);
	printf("\n ~a=  %u",h);
	printf("\n ~b=  %u",i);
	getch();

}
