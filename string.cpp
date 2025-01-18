#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define TOTAL_NAMES 10

void swap(char *a, char *b) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sortDescending(char names[][MAX_NAME_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) < 0) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    char names[TOTAL_NAMES][MAX_NAME_LENGTH];
    
    // Input 10 names from the user
    for (int i = 0; i < TOTAL_NAMES

