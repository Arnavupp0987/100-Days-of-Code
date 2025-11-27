#include <stdio.h>

int main() {
    char str[200];
    int len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
