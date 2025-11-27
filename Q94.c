#include <stdio.h>

int main() {
    char str[500], longest[100];
    int maxLen = 0, currLen = 0, idx = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (currLen > maxLen) {
                maxLen = currLen;
                longest[idx] = '\0';
            }
            currLen = 0;
            idx = 0;
            if (str[i] == '\0') break;
        } else {
            if (currLen < 100) {
                longest[idx++] = str[i];
            }
            currLen++;
        }
    }

    printf("%s", longest);

    return 0;
}

