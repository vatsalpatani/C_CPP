void main()
{
	int n,a=-1,b=1,i,c;
	clrscr();
	printf("\n enter n..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d ",c);
	}
	getch();
}