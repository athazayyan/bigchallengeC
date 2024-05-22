#include "header.h"

int main() {
    FILE *tmp = tmpfile();
    if (!tmp) {
        perror("Unable to create temporary file");
        return 1;
    }
    char inputFilename[256];

    printf("Masukkan nama inputan file: ");
    scanf("%s", inputFilename);

    int jumlahKarakter = hitunghasilKarakter(inputFilename);
    if (jumlahKarakter > 0) {
        ubahkatajadikecil(jumlahKarakter, inputFilename, tmp);
        menghilangkantandabaca(tmp, "output.txt");
    } else {
        printf("Gagal menghitung karakter dalam file.\n");
    }

    fclose(tmp);
    return 0;
}

