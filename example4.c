/*Program to create a file and write some text to it one character at a time using fputc() function until user hits the enter key.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char filename[20];
    char c;
    printf("Enter filename: \t");
    gets(filename);
    fp = fopen(filename,"w");
    if(fp==NULL){
        printf("\n Cannot create file.");
        exit(1);
    }

    else{
        printf("\n File is created.");
        }
        printf("\n Enter your text until Enter Key:\n");
        while((c=getchar())!='\n'){
            fputc(c,fp);
        }
        fclose(fp);
        

        getch();
    
}