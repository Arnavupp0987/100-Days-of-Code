#include <stdio.h>

int main() {
    char str[500];
    fgets(str, sizeof(str), stdin);

    int start = 0, end = 0;

    while (1) {
        if (str[end] == ' ' || str[end] == '\0' || str[end] == '\n') {
            for (int i = end - 1; i >= start; i--)
                printf("%c", i >= start ? str[i] : ' ');

            if (str[end] == ' ')
                printf(" ");

            if (str[end] == '\0')
                break;

            start = end + 1;
        }
        end++;
    }

    return 0;
}
