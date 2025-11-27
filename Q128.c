#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char c;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
        return 0;

    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            char x = tolower(c);
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    return 0;
}
