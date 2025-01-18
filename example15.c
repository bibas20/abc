/*Program that demonstrates the reading of the records of employee form file employee.dat file using fread() function.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char another = 'Y';
    struct employee{
        char name[40];
        int age;
        float salary;
    };
    struct employee emp;
    fp=fopen("employee.dat","rb");
    if(fp==NULL){
        puts("Cannot open file");
        exit(1);
    }
    printf("The records in the file employee are ......");
    while(fread(&emp, sizeof(emp),1,fp)==1)
    printf("\n%s %d %f",emp.name, emp.age, emp.salary);
fclose(fp);
return 0;
}