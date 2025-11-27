#include <stdio.h>

int main() {
    char str[300];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z'))
            continue;
        else if (str[i] != '\n')
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial Characters = %d\n", spaces, digits, special);

    return 0;
}
