#include "header.h"

void characterToVariable(int line, int length, char *kalimat) {
    char **string = (char **)malloc(line * sizeof(char *));
    for (int i = 0; i < line; i++) {
        string[i] = (char *)malloc((length + 1) * sizeof(char));
    }

    FILE *input;
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Tidak dapat membuka file...");
        exit(1);
    }

    int i = 0;
    while (i < line && fgets(string[i], length + 1, input) != NULL) {
        // Menghapus karakter baris baru (\n) yang mungkin ada di akhir string
        string[i][strcspn(string[i], "\n")] = '\0';
        i++;
    }

    int a = 0;
    int inWord = 0;
    for (int j = 0; j < line; j++) {
        for (int k = 0; k < strlen(string[j]); k++) {
            if (isalpha(string[j][k])) {
                if (inWord == 0) {
                    kalimat[a++] = toupper(string[j][k]); // Ubah menjadi huruf besar
                    inWord = 1;
                } else {
                    kalimat[a++] = tolower(string[j][k]); // Ubah menjadi huruf kecil
                }
            } else if (isdigit(string[j][k])) {
                kalimat[a++] = string[j][k];
            } else {
                kalimat[a++] = ' '; // Mengganti karakter non-alfanumerik dengan spasi
                inWord = 0;
            }
        }
        if (j < line - 1) {
            kalimat[a++] = ' '; // Tambahkan spasi antar baris
        }
    }

    kalimat[a] = '\0';

    // Membebaskan memori yang dialokasikan untuk string
    for (int i = 0; i < line; i++) {
        free(string[i]);
    }
    free(string);

    fclose(input);
}