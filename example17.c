/*Program to open a file named "student.txt" to keep the records of students(roll_no, name, course,and semester) in a write mode and perform the following operations
1. Insert records in to the fiel
2. Display all those records for which course in BCA and semester in II.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record {
    int roll_no;
    char name[20];
    char course[10];
    int semester;
};

int main() {
    FILE *fp;
    struct record student;
    char ch;

    fp = fopen("student.txt", "wb+");
    if (fp == NULL) {
        printf("\nERROR - Cannot open the destination file\n");
        exit(1);
    } else {
        printf("Enter student information:\n");
    }

    do {
        printf("Enter roll number: ");
        scanf("%d", &student.roll_no);

        printf("Enter name: ");
        scanf(" %[^\n]", student.name);

        printf("Enter course: ");
        scanf(" %[^\n]", student.course);

        printf("Enter semester: ");
        scanf("%d", &student.semester);

        fwrite(&student, sizeof(struct record), 1, fp);

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &ch);
    } while (ch != 'n');

    rewind(fp);

    printf("\nDisplaying records of students enrolled in 'BBA' and Semester 2:\n");

    int found = 0;
    while (fread(&student, sizeof(struct record), 1, fp) == 1) {
        if (strcmp(student.course, "BBA") == 0 && student.semester == 2) {
            found = 1;
            printf("Roll No: %d\n", student.roll_no);
            printf("Name: %s\n", student.name);
            printf("Course: %s\n", student.course);
            printf("Semester: %d\n\n", student.semester);
        }
    }

    if (!found) {
        printf("No students found with course 'BBA' and semester 2.\n");
    }

    fclose(fp);
    return 0;
}
