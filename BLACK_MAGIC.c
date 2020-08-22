#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("BLACK_MAGIC","w");
	if(fp==NULL)
	{
		printf("\nCan't create file ,writing not possible");
		getch();
		exit(0);
	}
	else
	printf("ENTER SOMETHING & PRESS $ AT END\n");
	do
	{
		ch=getch();
		fputc(ch,fp);
	}while(ch!='$');
	fclose(fp);
	getch();
}
