#include "header.h"

void menghilangkantandabaca(FILE *tmp) {
    rewind(tmp); 
    FILE *outputFile = fopen("outtemp.txt", "w");
    if (outputFile == NULL) {
        printf("Output file tidak dapat dibuka\n");
        return;
    }

    char buffer[256];
    while (fgets(buffer, 256, tmp) != NULL) {
        char *ptr = buffer;
        while (*ptr) {
            if (ispunct((unsigned char)*ptr)) {
                *ptr = ' ';
            }
            ptr++;
        }
        fprintf(outputFile, "%s", buffer);
    }

    fclose(outputFile);
}