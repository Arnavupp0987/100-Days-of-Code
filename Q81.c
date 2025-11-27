#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0')
        count++;

    if (count > 0 && str[count - 1] == '\n')
        count--;

    printf("%d", count);

    return 0;
}
