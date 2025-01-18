/*A file named DATA contains a series of integer numbers. Code a program to read these numbers and then wrtie all odd numbers to a file to be
called ODD and all even numbers to a file to be called EVEN*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fpdata;
    FILE *fpodd;
    FILE *fpeven;
    int i,n;
    int num;
    printf("\nHow many integers you want in data file?:\t");
    scanf("%d",&n);
    printf("\n Enter %d intgers: \t",n);
    fpdata=fopen("DATA.txt","w");
    for(i=0;i<n;i++){
        scanf("%d",&num);
        fprintf(fpdata,"%d\n",num);
    }
    fclose(fpdata);
    fpdata=fopen("DATA.txt","r");
    fpodd=fopen("ODD.txt","w");
    fpeven=fopen("EVEN.txt","w");
    for(i=0;i<n;i++){
        fscanf(fpdata,"%d",&num);
        if(num%2==0)
        fprintf(fpeven,"5d\t",num);
    else
    fprintf(fpodd, "%d\t",num);
    }
    fclose(fpdata);
    fclose(fpodd);
    fclose(fpeven);

    return 0;
}