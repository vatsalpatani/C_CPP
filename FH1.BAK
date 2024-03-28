#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	FILE *fp;
	clrscr();
	fp = fopen("first.txt","wb");
	printf("\n enter content of first.txt[press ctrl + z to terminate]\n");
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fp);
	fp = fopen("first.txt","r");
	printf("\n content of first.txt \n");
	while(1)
	{
		c=fgetc(fp);
		if(feof(fp))
			break;
		printf("%c",c);
	}fclose(fp);
	getch();
}