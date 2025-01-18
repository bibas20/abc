/*Program to append some text to a file by reading filename from user*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char filename[20];
    char c;
    printf("Enter filename: \t");
    gets(filename);
    fp = fopen(filename,"a");
    if(fp==NULL){
        printf("\n Cannot create or open file.");
        exit(1);
    }

    printf("\n Enter text to append to file %s:\n",filename);
    while((c=getchar())!='\n'){
        fputc(c,fp);
    }

    fclose(fp);

    getch();
}