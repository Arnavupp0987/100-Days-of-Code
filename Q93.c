#include <stdio.h>

int main() {
    char str1[300], str2[300];
    int freq[26] = {0};

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;

    for (int i = 0; str2[i] != '\0'; i++)
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;

    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
