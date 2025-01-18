/*Program to open a file and copy all its content to another file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *sfp, *dfp;
    char sfilename[20], dfilename[20];
    char c;
    printf("Enter source filename: \t");
    gets(sfilename);
    printf("\n Enter destination filename:\t");
    gets(dfilename);
    sfp = fopen(sfilename,"r");
    if(sfp == NULL){
        printf("\n Source File Can't be opened.");
        exit(1);
    }

    dfp = fopen(dfilename,"w");
    if(dfp==NULL){
        printf("\n Destination file cannot be created or opened.");
        exit(1);
    }

    while((c=fgetc(sfp))!=EOF){
        fputc(c,dfp);
    }
    printf("\n Copied........");
    fclose(dfp);
    fclose(sfp);
    getch();
}