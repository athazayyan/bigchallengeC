#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char inputFilename[Maks];
    char outputFilename[Maks];

    system("cls");

    printf("Masukkan nama inputan file: ");
    scanf("%s", inputFilename);

    printf("Masukkan nama outputan file: ");
    scanf("%s", outputFilename);

    int jumlahKata = hitunghasilKarakter(inputFilename);
    ubahkatajadikecil(jumlahKata, inputFilename);

   
    FILE *outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL) {
        printf("File tidak dapat dibuat\n");
        return 1;
    }
    return 0;
}


