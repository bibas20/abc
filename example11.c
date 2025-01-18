/*Given a text file, create anoter text file deleting the following words "three","bad",and "time"*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp, *fpp;
    char c[100]; 

 
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("Cannot open file");
        exit(1);
    }

   
    fpp = fopen("hello.txt", "w");
    if (fpp == NULL) {
        perror("Cannot create file");
        fclose(fp);
        exit(1);
    }

    while (fscanf(fp, "%99s", c) != EOF) { 
        if (strcmp(c, "three") != 0 && strcmp(c, "bad") != 0 && strcmp(c, "time") != 0) {
            fprintf(fpp, "%s ", c);
        }
    }

    fclose(fp);
    fclose(fpp);

    return 0;
}
