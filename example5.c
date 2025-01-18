/*Program to open a file, read its content one character at a time */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char filename[20];
    char c;
    printf("Enter filename: \t");
    gets(filename);
    fp = fopen(filename,"r");
    if(fp==NULL){
        printf("\n Cannot open file.");
        exit(1);
    }
    printf("\n The content of file is : \n");
    while((c=fgetc(fp))!=EOF){
        putchar(c);
    }
    fclose(fp);

    getch();
}