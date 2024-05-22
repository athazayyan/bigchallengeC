#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_LENGTH 100


int hitungKata(int jumlahKarakter) {
    int jumlahkata = 0;
    kataperbaris data[jumlahKarakter];
    FILE *hitungkataf = fopen("outtemp.txt", "r");
    if (hitungkataf == NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    while (jumlahkata < jumlahKarakter && fscanf(hitungkataf, "%99s", (data[jumlahkata].kata = malloc(jumlahKarakter))) == 1) {
        data[jumlahkata].panjangkata = strlen(data[jumlahkata].kata);
        jumlahkata++;
    }

    fclose(hitungkataf);
    return jumlahkata;
}
