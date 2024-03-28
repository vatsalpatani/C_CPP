#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	int e=0;
	clrscr();
	printf("\nenter four numbers...");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
		printf("\na is bigest...\n values 1/2 =%f",(float)a/2);
	else if(a<b && a<c && a<d)
		printf("\na is smallest...\n values + 4 =%d",a+4);
	else
		e=e+a;
	if(b>a && b>c && b>d)
		printf("\nb is bigest...\n values 1/2 =%f",(float)b/2);
	else if(b<a && b<c && b<d)
		printf("\nb is smallest...\n values + 4 =%d",b+4);
	else
		e=e+b;
	if(c>a && c>b && c>d)
		printf("\nc is bigest...\n values 1/2 =%f",(float)c/2);
	else if(c<a && c<b && c<d)
		printf("\nc is smallest...\n values + 4 =%d",c+4);
	else
		e=e+c;
	if(d>a && d>b && d>c)
		printf("\nd is bigest...\n values 1/2 =%f",(float)d/2);
	else if(d<a && d<b && d<c)
		printf("\nd is smallest...\n values + 4 =%d",d+4);
	else
		e=e+d;
		printf("\nremaining's sum=%d",e);
	getch();
}