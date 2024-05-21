#include <stdio.h>
#include <stdlib.h>

int hitunghasilKarakter() {
    char tempkata;
    FILE *fileHitungKarakter = fopen("input.txt", "r");
    if (fileHitungKarakter == NULL) {
        printf("File tidak dapat dibuka\n");
        exit(1);
    }
    
    int hasilKarakter = 0;
    while ((tempkata = fgetc(fileHitungKarakter)) != EOF) {
        hasilKarakter++;
    }
    
    fclose(fileHitungKarakter);
    printf("Jumlah karakter dalam file adalah %d\n", hasilKarakter);
    return hasilKarakter;

}
