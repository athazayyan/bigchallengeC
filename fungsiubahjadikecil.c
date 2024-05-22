#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void ubahkatajadikecil(int jumlahKata, const char *inputFilename, FILE *tmp) {
    FILE *inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL) {
        printf("File tidak dapat dibuka\n");
        return;
    }

    char buffer[256];
    char concatenatedString[10000] = ""; 
    int firstWord = 1; 

    while (fscanf(inputFile, "%255s", buffer) != EOF) {

        for (int i = 0; buffer[i]; i++) {
            buffer[i] = tolower((unsigned char)buffer[i]);
        }

       
        if (!firstWord) {
            strcat(concatenatedString, " "); 
        }
        strcat(concatenatedString, buffer); 

        firstWord = 0; 
    }

    fprintf(tmp, "%s", concatenatedString);

    fclose(inputFile);
}
