#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4;
    float total, percentage;
    char grade;

    printf("Enter the marks of four subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &marks1);
    printf("Subject 2: ");
    scanf("%d", &marks2);
    printf("Subject 3: ");
    scanf("%d", &marks3);
    printf("Subject 4: ");
    scanf("%d", &marks4);

    total = marks1 + marks2 + marks3 + marks4;
    percentage = (total / 400.0) * 100.0;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total marks: %.0f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
