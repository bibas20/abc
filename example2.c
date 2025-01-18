//Program to open the file named test.txt , read its content and display it to screen.
#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
void main(){
    FILE *fp;
    char s[100];
   
    fp = fopen("test.txt","r");
    if(fp==NULL){
        printf("\n Cannot open file.");
        exit(1);
    }
    else{
       printf("\n File is Opened.");
    }
    fgets(s,19,fp);
    printf("\n Text form file is : %s",s);
    fclose(fp);


    getch();
}