/*Some text file is given, create anoter text file replacing the following words "Ram", to "Hari", "Sita" to "Gita", and "Govinda" to "Shiva"*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256 

int main() {
    FILE *fp, *fpp;
    char c[BUFFER_SIZE];

  
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

    
    while (fscanf(fp, "%s", c) != EOF) { 
        if (strcmp(c, "Ram") == 0)
            fprintf(fpp, "Hari "); 
        else if (strcmp(c, "Sita") == 0)
            fprintf(fpp, "Gita "); 
        else if (strcmp(c, "Govinda") == 0)
            fprintf(fpp, "Shiva "); 
        else
            fprintf(fpp, "%s ", c);
    }

    fclose(fp);
    fclose(fpp);

    return 0;
}
