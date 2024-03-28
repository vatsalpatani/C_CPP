void main()
{
	int i,n,k,j;
	clrscr();
	printf("\nenter n..");
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}