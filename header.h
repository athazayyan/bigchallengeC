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

typedef struct kata {
    double skor;
    char *kata;
    int jumlahkata;
} kata;

int hitunghasilKarakter(const char* filename);
void ubahkatajadikecil(int jumlahKata, const char *inputFilename, FILE *tmp);
void menghilangkantandabaca(FILE *tmp, const char *outputFilename);
void strtokCharacter(char *inputan, char *kalimat, kata datafix[]);
double scoring (char *);
