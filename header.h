#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    double skor;
    int jumlahkatadenganskorsama;
    char *kata;
    int panjangkata;
    int baris;
}kataperbaris;


int hitunghasilKarakter(const char* filename);
void ubahkatajadikecil(int jumlahKata, const char *inputFilename, FILE *tmp);
void menghilangkantandabaca(FILE *tmp);
void besarkanhurufdiawal(int jumlahkarakter);
int hitungKata(int jumlahKarakter);
double scoring(const char *inputan);
void strtokbismillah( char* satubaris, int jumlahkarakter, kataperbaris *kata);
char *bacasatubaris(int jumlahkarakter);
int hitungKata(int jumlahKarakter);
void insertionSort(kataperbaris kata[], int word);
