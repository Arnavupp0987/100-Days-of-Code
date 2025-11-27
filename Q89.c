#include <stdio.h>

int main() {
    char str[300], ch;
    int count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;

    printf("%d", count);

    return 0;
}
