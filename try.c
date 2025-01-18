#include<stdio.h>
#include<conio.h>

void main() {
    int marks[5];
    int sum = 0, i;
    float average = 0, percentage = 0;

    printf("Please enter marks for 5 subjects:\n");
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;           
    percentage = (sum / 500.0) * 100; 

    printf("Marks in full:\n");
    

    for(i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nTotal marks = %d", sum);
    printf("\nAverage marks = %.2f", average);
    printf("\nPercentage = %.2f%%", percentage);

    getch();
}

