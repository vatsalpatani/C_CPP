#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int n,f;
	clrscr();
	printf("\nenter n..");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of %d is %d",n,f);
	getch();
}
int fact(int n)
{
	int f=1,i;
	for(i=n;i>=1;i--)
		f= f*i;
	return(f);
}