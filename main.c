#include "header.h"
#include <stdio.h>
int main() {
    FILE *tmp = tmpfile();
    if (!tmp) {
        perror("Unable to create temporary file");
        return 1;
    }
    char inputFilename[256];
    int jumlahkata =0;
    int jumlahKarakter = 0;
 

    printf("Masukkan nama inputan file: ");
    scanf("%s", inputFilename);

    
    
    jumlahKarakter = hitunghasilKarakter(inputFilename);
    jumlahkata = hitungKata(jumlahKarakter);

    if (jumlahKarakter > 0) {
        ubahkatajadikecil(jumlahKarakter, inputFilename, tmp);
        menghilangkantandabaca(tmp);
        besarkanhurufdiawal(jumlahKarakter); 
    }
    kataperbaris kata[jumlahKarakter]; 

    char *line = bacasatubaris(jumlahKarakter);
    if (line != NULL) {
        strtokbismillah(line, jumlahKarakter, kata);
        free(line); 
        insertionSort( kata, jumlahkata);
        for (int j = 0; j < jumlahkata; j++) {
        printf("Kata: %s, Panjang: %d, Skor: %f\n", kata[j].kata, kata[j].panjangkata, kata[j].skor);
        free(kata[j].kata); // Free allocated memory for each word
    }


    } else 
    {
        printf("No line read or an error occurred.\n");
    }


    fclose(tmp);
    return 0;
}

