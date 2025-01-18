//Proram to create a file named test.txt and write some text "I studied BSc CSIT"
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");
    
    if (fp == NULL) {
        printf("\nCannot create file.");
        exit(1);
    } else {
        printf("\nFile is created.");
    }

    fputs("I studied BSc CSIT", fp);
    fclose(fp);
    
    return 0;
}
