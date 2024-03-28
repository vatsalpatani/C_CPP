void main()
{
	int x,y,z,c;
	clrscr();
	printf("\nenter mango's weight , truck's weight and bridge's weight...\n");
	scanf("%d %d %d",&x,&y,&z);
	c=y/x;
	if(c<0 || z<y)
	{
		printf("\nnot possible");
	}
	else
	{
		printf("%d mangos can carried in 1 truck",c);
	}
	getch();
}