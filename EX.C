// enter n=4 for proper output.
void main()
{
	int i,n,j;
	clrscr();
	printf("enter n..");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(j==1 || i==1 || i==n+1 || j==n+1)
			printf("%2d",n-1);
			else if(j==2 || i==2 || i==n || j==n)
			printf("%2d",n-2);
			else if(j==3 || i==3 || i==n-1 || j==n-1)
			printf("%2d",n-3);
		}
		printf("\n");
	}
	getch();
}