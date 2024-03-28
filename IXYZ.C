#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c,d,i=0,x=0,y=0,z=0;
	clrscr();

	i=a*b/c+(a+b)/b;
	x=i*a+(c-b)d/i;
	y=i*x/y+(a*b+c)/i*x;
	z=x/i+(a+b+c/d)*c;

	printf("a=");
	scanf("%f",&a);
	printf("\nb=");
	scanf("%f",&b);
	printf("\nc=");
	scanf("%f",&c);
	printf("\nd=");
	scanf("%f",&d);

	printf("\ni=",i);
	printf("\nx=",x);
	printf("\ny=",y);
	printf("\nz=",z);
	getch();

}