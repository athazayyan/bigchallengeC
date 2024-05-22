#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void strtokbismillah(char *satubaris, int jumlahkarakter, kataperbaris *kata) {
    char *token = strtok(satubaris, " ");
    int i = 0;
    while (token != NULL && i < jumlahkarakter) {
        kata[i].kata = malloc(strlen(token) + 1);
        if (kata[i].kata == NULL) {
            perror("Failed to allocate memory");
            return;
        }
        strcpy(kata[i].kata, token);
        kata[i].panjangkata = strlen(token);
        kata[i].skor = scoring(token);
        i++;
        token = strtok(NULL, " ");
    }
}