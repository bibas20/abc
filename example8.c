/*Given a text, create another text file deleting all the vowel (a,e,i,o,u)*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp, *fpp;
    char c;
    fp  = fopen("test.txt","r+");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }
    fpp = fopen("hello.txt","w");
    if(fpp == NULL){
        printf("Cannot create file");
        fclose(fp);
        exit(1);
    }

    while((c=fgetc(fp))!=EOF){
        if((c!='a')&&(c!='e')&&(c!='i')&&(c!='o')&&(c!='u'))
        fputc(c,fpp);
    }

    fclose(fp);
    fclose(fpp);

    return 0;
}