#include<stdio.h>
#include<conio.h>
void main()
{
	float u,c;
	clrscr();
	printf("\nenter total no of unit...");
	scanf("%f",&u);
	if(u<=50)
		c=u*2.70;
	else if(u<=100)
		c=(u-50)*3.60+135;
	else if(u<=200)
		c=(u-100)*4.10+315;
	else
		c=(u-200)*4.70+725;
	printf("\n light bill amount is...%f",c);
	getch();

}