/*Define a structure for Vehicle Owner having data members name, address, telephone number, vehicle number and license number.
Take the data for ten owners, write them in file "Own.txt". Read the data form the file and display them.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
void main(){
    FILE *fp;
    struct vehicle_owner{
        char name[20];
        char address[20];
        long int phone_no;
        int vehicle_no;
        int license_no;
    };
    struct vehicle_owner vehicle[SIZE], v[SIZE];
    int i;
    fp=fopen("Own.txt","w");
    if(fp==NULL){
        printf("\n Cannot create file.");
        exit(1);
    }
    for(i=0;i<SIZE;i++){
        printf("\n ENter information about vehicle owner %d",i+1);
        printf("\n Enter name: \t");
        gets(vehicle[i].name);
        printf("\n Enter address: \t");
        gets(vehicle[i].address);
        printf("\n Enter telephone no: \t");
        scanf("%ID",&vehicle[i].phone_no);
        printf("\n Enter vehicle no: \t");
        scanf("%d",&vehicle[i].vehicle_no);
         printf("\n Enter license no: \t");
        scanf("%d",&vehicle[i].license_no);
        fprintf(fp,"%s\t%s\t%ID\t%d\t%d\n",vehicle[i].name, vehicle[i].address, vehicle[i].phone_no,vehicle[i].vehicle_no,vehicle[i].license_no);
        fflush(stdin);
    }
    fclose(fp);
    fp=fopen("Own.txt","r");
    for(i=0;i<SIZE;i++){
        fscanf(fp,"%s %s %ID %d %d",&v[i].address,v[i].phone_no,v[i].vehicle_no,v[i].license_no);
    }
    fclose(fp);
    getch();
}