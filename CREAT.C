#include<stdio.h>
#include<conio.h>
void main(int argc , char *argv[])
{
	char c;
	FILE *fp;
	if(argc!=2)
	{
		printf("invalid no of argument..");
		exit(1);
	}
	fp=fopen(argv[1],"w");
	if(fp==NULL)
	{
		printf("can not creat file");
		exit(1);
	}
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	printf("\n \t file created successfully");
	fclose(fp);
}