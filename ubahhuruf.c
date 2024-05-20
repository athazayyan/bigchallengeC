#include <stdio.h>
#include <string.h>

int jumlahnilaiKarakter(){
    double nilai = 0;
    char inputan[500];
    
    scanf("%[^\n]", inputan);
    
    
    for (int i = 0; i < strlen(inputan); i++) {
        char c = inputan[i];
        
        switch (c) {
            case 'a': case 'A':
                nilai += (5 * 1 + 8) % 26;
                break;
            case 'b': case 'B':
                nilai += (5 * 2 + 8) % 26;
                break;
            case 'c': case 'C':
                nilai += (5 * 3 + 8) % 26;
                break;
            case 'd': case 'D':
                nilai += (5 * 4 + 8) % 26;
                break;
            case 'e': case 'E':
                nilai += (5 * 5 + 8) % 26;
                break;
            case 'f': case 'F':
                nilai += (5 * 6 + 8) % 26;
                break;
            case 'g': case 'G':
                nilai += (5 * 7 + 8) % 26;
                break;
            case 'h': case 'H':
                nilai += (5 * 8 + 8) % 26;
                break;
            case 'i': case 'I':
                nilai += (5 * 9 + 8) % 26;
                break;
            case 'j': case 'J':
                nilai += (5 * 10 + 8) % 26;
                break;
            case 'k': case 'K':
                nilai += (5 * 11 + 8) % 26;
                break;
            case 'l': case 'L':
                nilai += (5 * 12 + 8) % 26;
                break;
            case 'm': case 'M':
                nilai += (5 * 13 + 8) % 26;
                break;
            case 'n': case 'N':
                nilai += (5 * 14 + 8) % 26;
                break;
            case 'o': case 'O':
                nilai += (5 * 15 + 8) % 26;
                break;
            case 'p': case 'P':
                nilai += (5 * 16 + 8) % 26;
                break;
            case 'q': case 'Q':
                nilai += (5 * 17 + 8) % 26;
                break;
            case 'r': case 'R':
                nilai += (5 * 18 + 8) % 26;
                break;
            case 's': case 'S':
                nilai += (5 * 19 + 8) % 26;
                break;
            case 't': case 'T':
                nilai += (5 * 20 + 8) % 26;
                break;
            case 'u': case 'U':
                nilai += (5 * 21 + 8) % 26;
                break;
            case 'v': case 'V':
                nilai += (5 * 22 + 8) % 26;
                break;
            case 'w': case 'W':
                nilai += (5 * 23 + 8) % 26;
                break;
            case 'x': case 'X':
                nilai += (5 * 24 + 8) % 26;
                break;
            case 'y': case 'Y':
                nilai += (5 * 25 + 8) % 26;
                break;
            case 'z': case 'Z':
                nilai += (5 * 26 + 8) % 26;
                break;
            default:
                break;
        }
    }
    
    return nilai;
}
