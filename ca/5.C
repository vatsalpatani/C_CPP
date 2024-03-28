#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	char ch;
	clrscr();
	printf("\nenter first number..");
	scanf("%f",&a);
	printf("\nenter first number..");
	scanf("%f",&b);
	printf("\nenter your choice...\n + \n - \n * \n /\n");
	cscanf("%c",&ch);
	switch(ch)
	{
		case '+':
			printf("\nyour choice is +");
			printf("\n%.2f + %.2f = %.2f",a,b,a+b);
			break;

		case '-':
			printf("\nyour choice is -");
			printf("\n%.2f - %.2f = %.2f",a,b,a-b);
			break;

		case '*':
			printf("\nyour choice is *");
			printf("\n%.2f * %.2f = %.2f",a,b,a*b);
			break;

		case '/':
			printf("\nyour choice is /");
			printf("\n%.2f / %.2f = %.2f",a,b,a/b);
			break;

		default:
			printf("\ninvalid choice");

	}
	getch();

}