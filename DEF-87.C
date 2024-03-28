#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char name;
}s1;
void main()
{
	s1.rno=1;
	s1.name='a';
	clrscr();
	printf("\nroll no = %d\nname = %c",s1.rno,s1.name);
	getch();
}
