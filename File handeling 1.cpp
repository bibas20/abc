#include<stdio.h>

void main()
{  
	FILE *fp;
	clrscr();
	fp=fopen("test.txt","w.");
	if(fp=null)
	{
	printf("/ncannot create file.");
	eixt();
	}
else
{
	printf("/n File is cerated");
}
fputs("I study BCA",fp);
fclose(fp);
getch();
}


