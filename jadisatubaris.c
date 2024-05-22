#include "header.h"
#include <stdio.h>
#include <stdlib.h>

char *bacasatubaris(int jumlahkarakter) {
    FILE *open = fopen("outtemp.txt", "r");
    if (open == NULL) {
        perror("Failed to open file");
        return NULL;
    }

    char *satubaris = malloc(jumlahkarakter);
    if (satubaris == NULL) {
        perror("Failed to allocate memory");
        fclose(open);
        return NULL;
    }

    if (fgets(satubaris, jumlahkarakter, open) == NULL) {
        perror("Failed to read line or file is empty");
        free(satubaris);
        fclose(open);
        return NULL;
    }

    fclose(open);
    return satubaris;
}