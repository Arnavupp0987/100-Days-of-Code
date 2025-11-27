#include <stdio.h>

int main() {
    char str[200];
    int len = 0, flag = 1;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
        len++;

    if (str[len - 1] == '\n')
        len--;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
