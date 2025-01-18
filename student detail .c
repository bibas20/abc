#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, average, percentage;
    int i;
    int passed = 1;

    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
        if (marks[i] < 35) {
            passed = 0;
        }
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    char division[10];
    if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 50) {
        sprintf(division, "Second");
    } else if (percentage >= 40) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }

    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);
    
    if (passed) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}

