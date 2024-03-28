void main()
{
	auto int a=10;
	{
		auto int b=100;
		{
			auto int c =1000;
			clrscr();
			//printf("\n a=%d",a);
			printf("\n a= %d \n b=%d c=%d",a,b,c);
		}
		 //printf("\n a=%d",a);
		 printf("\n a= %d \n b=%d c=%d",a,b,c);
	}
	printf("\n a= %d \n b=%d c=%d",a,b,c);
	//printf("\n a=%d",a);
	getch();
}