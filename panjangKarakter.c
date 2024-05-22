#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int hitunghasilKarakter(const char* filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File tidak dapat dibuka\n");
        return -1;
    }

    int karakterCount = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        karakterCount++;
    }

    fclose(file);
    return karakterCount;
}
