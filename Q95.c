#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], concat[400];
    int len1 = 0, len2 = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (s1[len1 - 1] == '\n') len1--;
    if (s2[len2 - 1] == '\n') len2--;

    if (len1 != len2) {
        printf("Not Rotation");
        return 0;
    }

    for (int i = 0; i < len1; i++) concat[i] = s1[i];
    for (int i = 0; i < len1; i++) concat[len1 + i] = s1[i];
    concat[2 * len1] = '\0';

    int found = 0;
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (concat[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
