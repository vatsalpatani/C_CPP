
void fun1();
void fun2();
void main()
{
	extern int a;
       clrscr();
       printf("\n main  a= %d",a);
       a++;
       fun1();
       a++;
       fun2();
       getch();
}
void fun1()
{
	extern int a;
	printf("\n fun 1 a= %d",a);

}
void fun2()
{
	int a;
	printf("\n fun 2 a= %d",a);


}
int a;