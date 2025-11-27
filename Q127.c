#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char c;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL)
        return 0;

    while ((c = fgetc(in)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c = c - 32;
        fputc(c, out);
    }

    fclose(in);
    fclose(out);
    return 0;
}
