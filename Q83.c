#include <stdio.h>

int main() {
    char str[200];
    int v = 0, c = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", v, c);

    return 0;
}
