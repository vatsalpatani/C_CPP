#include<stdio.h>
#include<conio.h>
void main()
{
	int i,value,min,max;
	clrscr();
	for(i=1;i!=0;i++)
	{
		scanf("%d",&value);
		if(i==1)
		{
			max=value;
			min=value;
		}
		else if(max<value)
		{
			max=value;
		}
		else if(value<min)
		{
			min=value;
		}
		if(value==0)
		break;
	}
	printf("\n min=%d \n max=%d",min,max);
	getch();
}