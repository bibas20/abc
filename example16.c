/*Program to create a file named "employee.dat", and store records of N employee in the file. These records contain name, indentification number, office name, and occupation of the employee. Also display name of those employees whose offic name is "Everst Bank" and occupation is "manager";*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct records {
    char name[30];
    int id;
    char office_name[30];
    char occupation[30];
};

int main() {
    struct records employee;
    FILE *fp;
    char ch;

    // Open file
    fp = fopen("employee.dat", "wb+");
    if (fp == NULL) {
        printf("\nERROR - Cannot open the destination file\n");
        return 1;
    }

    printf("Enter employee information: \n");

    // Write employee records to file
    do {
        printf("Enter name: ");
        scanf(" %[^\n]", employee.name);

        printf("Enter identification number: ");
        scanf("%d", &employee.id);

        printf("Enter office name: ");
        scanf(" %[^\n]", employee.office_name);

        printf("Enter occupation: ");
        scanf(" %[^\n]", employee.occupation);

        fwrite(&employee, sizeof(struct records), 1, fp);

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &ch);  // Leading space to skip newline
    } while (ch != 'n');

    // Display employees with specific conditions
    rewind(fp);
    printf("Name of employees whose office name is 'Everest Bank' and occupation is 'Manager': \n");
    while (fread(&employee, sizeof(struct records), 1, fp) == 1) {
        if ((strcmp(employee.office_name, "Everest Bank") == 0) &&
            (strcmp(employee.occupation, "Manager") == 0)) {
            printf("%s\n", employee.name);
        }
    }

    fclose(fp);
    return 0;
}
