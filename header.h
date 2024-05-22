#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct kataperbaris {
    double skor;
    int jumlahkatadenganskorsama;
    char *kata;
    int panjangkata;
    int baris;
};

struct kata {
    double skor;
    char *kata;
    int jumlahkata;
};

int hitunghasilKarakter(const char* filename);
void ubahkatajadikecil(int jumlahKata, const char *inputFilename, FILE *tmp);
void menghilangkantandabaca(FILE *tmp, const char *outputFilename);
