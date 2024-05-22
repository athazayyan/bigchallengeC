#include "header.h"

void strtokCharacter(char *inputan, char *kalimat, kata datafix[])
{
    int i = 0;
    inputan = strtok(kalimat," ");
    while (inputan != NULL){
        strcpy(datafix[i].kata,inputan);
        datafix[i].skor=scoring(inputan);
        datafix[i].jumlahkata=strlen(inputan);
        inputan = strtok(NULL, " ");
        i++;
    }
}