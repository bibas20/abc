//Program to open the file named test.txt and add to it the text "@TU"
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
void main(){
    FILE *fp;
    fp = fopen("test.txt","a");
    if(fp==NULL){
        printf("\n Cannot open file.");
        exit(1);
    }

    else{
        printf("\n File is opened.");
    }
    fputs("At patan Multiple Campus",fp);
    fclose(fp);

    getch();
}