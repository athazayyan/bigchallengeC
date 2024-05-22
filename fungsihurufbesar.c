#include "header.h"


void besarkanhurufdiawal(int jumlahkarakter) {
    FILE *outputp = fopen("outtemp.txt", "r+");
    if (outputp == NULL) {
        perror("Failed to open file");
    }

    char a[jumlahkarakter];
    int p = 0;
    int capitalizeNext = 1; 

    while ((a[p] = fgetc(outputp)) != EOF && p < jumlahkarakter - 1) {
        if (capitalizeNext && isalpha(a[p])) {
            a[p] = toupper(a[p]);
            capitalizeNext = 0;
        } else if (isspace(a[p]) || ispunct(a[p])) {
            capitalizeNext = 1;
        } else {
            capitalizeNext = 0;
        }
        p++;
    }
    a[p] = '\0'; 
    fseek(outputp, 0, SEEK_SET);
    fputs(a, outputp);
    fclose(outputp);
}
