#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    char address[100];
    float marks[5];
};

int main() {
    struct student students[35];
    struct student *ptr = students;
    int i, j;

    for (i = 0; i < 35; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(ptr + i)->roll_no);
        printf("Name: ");
        scanf("%s", (ptr + i)->name);
        printf("Address: ");
        scanf("%s", (ptr + i)->address);
        printf("Enter marks of 5 subjects: ");
        for (j = 0; j < 5; j++) {
            scanf("%f", &(ptr + i)->marks[j]);
        }
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 35; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", (ptr + i)->roll_no);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Address: %s\n", (ptr + i)->address);
        printf("Marks: ");
        for (j = 0; j < 5; j++) {
            printf("%.2f ", (ptr + i)->marks[j]);
        }
        printf("\n");
    }

    return 0;
}

