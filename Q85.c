#include <stdio.h>

int main() {
    char str[200];
    int len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
        len++;

    if (str[len - 1] == '\n')
        len--;

    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
