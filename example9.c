//Program to create a file named employee .txt and write name, id, address and salary of a employee to this file.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char name[20];
    int id;
    char address[20];
    float salary;
    fp=fopen("employee.txt","w");
    if(fp==NULL){
        printf("\n File cannot be created or opened.");
        exit(1);
    }
    printf("\n Enter name of employee:\t");
    gets(name);
    printf("\n Enter id of %s: \t",name);
    scanf("%d",&id);
    fflush(stdin);
    printf("\n Enter address of %s: \t", name);
    scanf(address);
    printf("\n Enter salary of %s: \t", name);
    scanf("%f",&salary);
    printf("\n Now writing data to file...");
    fprintf(fp,"Name=%s\n ID=%d\n Address=%s\n Salary=%.2f",name,id,address,salary);
    printf("\n completed");
    fclose(fp);
}