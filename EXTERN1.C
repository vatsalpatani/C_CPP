int a=10;
void fun1();
void fun2();
void main()
{
       clrscr();
       printf("\n a= %d",a);
       a++;
       fun1();
       fun2();
       getch();
}
void fun1()
{
	printf("\n a= %d",a);
	a++;

}
void fun2()
{
	printf("\n a= %d",a);
	a++;

}