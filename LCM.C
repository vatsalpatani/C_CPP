#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,max;
	clrscr();
	printf("enter two numbers..");
	scanf("%d %d",&n1,&n2);
	max=(n1>n2)?n1:n2;
	while(1)
	{
		if(max %n1==0&&max %n2==0)
		{
			printf("the LCM of %d and %d is %d",n1,n2,max);
			break;
		}
		++max;
	}
	getch();
}