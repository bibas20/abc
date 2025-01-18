/*Program that demonstrate the writing of the records of employee to file employee.dat file using fwrite() function reading values from the user choice.*/
/*Writes records to a file using structure*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char another = 'Y';
    struct employee
    {
        char name[40];
        int age;
        float salary;
    };
    struct employee emp;
    fp = fopen("employee.dat","wb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(another=='Y'){
        printf("\n Enter name, age and basic salary of an employee: \n ");
        scanf("%s %d %f",&emp.name, &emp.age, &emp.salary);
        fwrite(&emp,sizeof(emp),1,fp);
        printf("\n Add another record(Y/N)");
        fflush(stdin);

        another=getchar( );
    }
    fclose(fp);
    return 0;
}