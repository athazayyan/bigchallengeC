#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    float nilai = 0;
    char inputan[500];
    
    // Membaca inputan sampai newline
    scanf("%[^\n]", inputan);
    
    // Mengiterasi setiap karakter dalam inputan
    for (int i = 0; i < strlen(inputan); i++)
    {
        switch (inputan[i])
        {
            case 'a':
                nilai += (5 * 1 + 8) % 26;
                break;
            case 'b':
                nilai += (5 * 2 + 8) % 26;
                break;
            case 'c':
                nilai += (5 * 3 + 8) % 26;
                break;
            case 'd':
                nilai += (5 * 4 + 8) % 26;
                break;
            case 'e':
                nilai += (5 * 5 + 8) % 26;
                break;
            case 'f':
                nilai += (5 * 6 + 8) % 26;
                break;
            case 'g':
                nilai += (5 * 7 + 8) % 26;
                break;
            case 'h':
                nilai += (5 * 8 + 8) % 26;
                break;
            case 'i':
                nilai += (5 * 9 + 8) % 26;
                break;
            case 'j':
                nilai += (5 * 10 + 8) % 26;
                break;
            case 'k':
                nilai += (5 * 11 + 8) % 26;
                break;
            case 'l':
                nilai += (5 * 12 + 8) % 26;
                break;
            case 'm':
                nilai += (5 * 13 + 8) % 26;
                break;
            case 'n':
                nilai += (5 * 14 + 8) % 26;
                break;
            case 'o':
                nilai += (5 * 15 + 8) % 26;
                break;
            case 'p':
                nilai += (5 * 16 + 8) % 26;
                break;
            case 'q':
                nilai += (5 * 17 + 8) % 26;
                break;
            case 'r':
                nilai += (5 * 18 + 8) % 26;
                break;
            case 's':
                nilai += (5 * 19 + 8) % 26;
                break;
            case 't':
                nilai += (5 * 20 + 8) % 26;
                break;
            case 'u':
                nilai += (5 * 21 + 8) % 26;
                break;
            case 'v':
                nilai += (5 * 22 + 8) % 26;
                break;
            case 'w':
                nilai += (5 * 23 + 8) % 26;
                break;
            case 'x':
                nilai += (5 * 24 + 8) % 26;
                break;
            case 'y':
                nilai += (5 * 25 + 8) % 26;
                break;
            case 'z':
                nilai += (5 * 26 + 8) % 26;
                break;
            default:
                break;
        }
    }
    
    return nilai;
}
