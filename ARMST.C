void main()
{
	int n,m,s=0,a=0,r,i;
	clrscr();
	printf("\n enter n..");
	scanf("%d",&n);
	m=n;
	for(i=1;n!=0;i++)
	{
		r=n%10;
		s=r*r*r;
		n=n/10;
		a=a+s;
	}
	if(m==a)
	{
		printf("%d is armstrong",m);
	}
	else
	{
	       printf("%d is not armstrong",m);
	}
	getch();
}