#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    for(int i = 1; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("%s", s);
    return 0;
}
