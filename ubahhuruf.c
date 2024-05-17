#include <stdio.h>

int main(){
    char alphabet[]={"abcdefghijklmnopqrstuvwxyz"};
    int a[26];
    for (int i = 0; i < 26; i++)
    {   
        printf("%c = ", alphabet[i]);
        a[i] = (5*i + 8)%26;
        alphabet[i] = a[i];
        printf("%d\n", alphabet[i]);    
    }
    
return 0;
}