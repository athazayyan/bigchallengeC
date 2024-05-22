#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void insertionSort(kataperbaris kata[], int word) {
    int i, j;
    kataperbaris key;

    // Sorting by skor (descending)
    for (i = 1; i < word; i++) {
        key = kata[i];
        j = i - 1;

        while (j >= 0 && kata[j].skor < key.skor) {
            kata[j + 1] = kata[j];
            j = j - 1;
        }
        kata[j + 1] = key;
    }

    // Sorting by kata (ascending) within each skor group
    for (i = 1; i < word; i++) {
        key = kata[i];
        j = i - 1;

        while (j >= 0 && kata[j].skor == key.skor && strcmp(kata[j].kata, key.kata) > 0) {
            kata[j + 1] = kata[j];
            j = j - 1;
        }
        kata[j + 1] = key;
    }
}
