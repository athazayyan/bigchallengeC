#include <stdio.h>
#include <string.h>
#include "header.h"

int jumlahnilaiKarakter(){
    double nilai = 0;
    char inputan[500];
    
    scanf("%[^\n]", inputan);
    
    
    for (int i = 0; i < strlen(inputan); i++) {
        char c = inputan[i];
        
        switch (c) {
            case 'a': case 'A':
                nilai += (5 * 1 + 8) % 36;
                break;
            case 'b': case 'B':
                nilai += (5 * 2 + 8) % 36;
                break;
            case 'c': case 'C':
                nilai += (5 * 3 + 8) % 36;
                break;
            case 'd': case 'D':
                nilai += (5 * 4 + 8) % 36;
                break;
            case 'e': case 'E':
                nilai += (5 * 5 + 8) % 36;
                break;
            case 'f': case 'F':
                nilai += (5 * 6 + 8) % 36;
                break;
            case 'g': case 'G':
                nilai += (5 * 7 + 8) % 36;
                break;
            case 'h': case 'H':
                nilai += (5 * 8 + 8) % 36;
                break;
            case 'i': case 'I':
                nilai += (5 * 9 + 8) % 36;
                break;
            case 'j': case 'J':
                nilai += (5 * 10 + 8) % 36;
                break;
            case 'k': case 'K':
                nilai += (5 * 11 + 8) % 36;
                break;
            case 'l': case 'L':
                nilai += (5 * 12 + 8) % 36;
                break;
            case 'm': case 'M':
                nilai += (5 * 13 + 8) % 36;
                break;
            case 'n': case 'N':
                nilai += (5 * 14 + 8) % 36;
                break;
            case 'o': case 'O':
                nilai += (5 * 15 + 8) % 36;
                break;
            case 'p': case 'P':
                nilai += (5 * 16 + 8) % 36;
                break;
            case 'q': case 'Q':
                nilai += (5 * 17 + 8) % 36;
                break;
            case 'r': case 'R':
                nilai += (5 * 18 + 8) % 36;
                break;
            case 's': case 'S':
                nilai += (5 * 19 + 8) % 36;
                break;
            case 't': case 'T':
                nilai += (5 * 20 + 8) % 36;
                break;
            case 'u': case 'U':
                nilai += (5 * 21 + 8) % 36;
                break;
            case 'v': case 'V':
                nilai += (5 * 22 + 8) % 36;
                break;
            case 'w': case 'W':
                nilai += (5 * 23 + 8) % 36;
                break;
            case 'x': case 'X':
                nilai += (5 * 24 + 8) % 36;
                break;
            case 'y': case 'Y':
                nilai += (5 * 25 + 8) % 36;
                break;
            case 'z': case 'Z':
                nilai += (5 * 26 + 8) % 36;
                break;
            case '0':
                nilai += (5 * 27 + 8)  % 36;
                break;
            case '1':
                nilai += (5 * 28 + 8)  % 36;
                break;
            case '2':
                nilai += (5 * 29 + 8)  % 36;
                break;
            case '3':
                nilai += (5 * 30 + 8)  % 36;
                break;
            case '4':
                nilai += (5 * 31 + 8)  % 36;
                break;
            case '5':
                nilai += (5 * 32 + 8)  % 36;
                break;
            case '6':
                nilai += (5 * 33 + 8)  % 36;
                break;
            case '7':
                nilai += (5 * 34 + 8)  % 36;
                break;
            case '8':
                nilai += (5 * 35 + 8)  % 36;
                break;
            case '9':
                nilai += (5 * 36 + 8)  % 36;
                break;
            default:
                break;
        }
    }
    
    return nilai;
}
