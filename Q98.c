#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] == ' ') i++;

    printf("%c. ", str[i]);
    i++;

    for (; str[i] != '\0'; i++)
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n')
            break;

    int j = i;
    while (str[j] != ' ' && str[j] != '\n' && str[j] != '\0') j++;

    printf("%c. ", str[i]);

    while (str[j] == ' ') j++;

    for (; str[j] != '\0' && str[j] != '\n'; j++)
        printf("%c", str[j]);

    return 0;
}
