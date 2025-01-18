#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollNumber;
    char department[50];
    float cgpa;
} Student;

void addStudent(Student students[], int *size) {
    printf("Enter student name: ");
    fgets(students[*size].name, sizeof(students[*size].name), stdin);
    students[*size].name[strcspn(students[*size].name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &students[*size].rollNumber);
    getchar();

    printf("Enter department: ");
    fgets(students[*size].department, sizeof(students[*size].department), stdin);
    students[*size].department[strcspn(students[*size].department, "\n")] = 0;

    printf("Enter CGPA: ");
    scanf("%f", &students[*size].cgpa);
    getchar();

    (*size)++;
}

void searchStudent(Student students[], int size) {
    int rollNumber;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);
    getchar();

    for (int i = 0; i < size; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student found!\n");
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("CGPA: %.2f\n", students[i].cgpa);
            return;
        }
    }

    printf("Student not found!\n");
}

void displayStudents(Student students[], int size) {
    printf("All Students:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Department: %s\n", students[i].department);
        printf("CGPA: %.2f\n\n", students[i].cgpa);
    }
}

int main() {
    Student students[100];
    int size = 0;

    while (1) {
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Display All Students\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        int option;
        scanf("%d", &option);
        getchar();

        switch (option) {
            case 1:
                addStudent(students, &size);
                break;
            case 2:
                searchStudent(students, size);
                break;
            case 3:
                displayStudents(students, size);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option! Please choose again.\n");
        }
    }

    return 0;
}
