void main()
{
	long n,m,s=0,r,i;
	clrscr();
	printf("\n enter n..");
	scanf("%ld",&n);
	m=n;
	for(i=1;n!=0;i++)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(m==s)
	{
		printf("%ld is palindrom",m);
	}
	else
	{
	       printf("%ld is not palindrom",m);
	}
	getch();
}