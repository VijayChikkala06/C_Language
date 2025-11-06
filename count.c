#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;
    int vowels = 0, consonants = 0, digits = 0, specials = 0;
    fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("Error: File does not exist.\n");
        exit(0); 
    }
    while ((c = fgetc(fp)) != EOF) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            consonants++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else {
            specials++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}

