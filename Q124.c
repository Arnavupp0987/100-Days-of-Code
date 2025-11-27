#include <stdio.h>

int main() {
    char src[100], dest[100], ch;
    FILE *fp1, *fp2;

    scanf("%s", src);
    scanf("%s", dest);

    fp1 = fopen(src, "r");
    if (fp1 == NULL) {
        printf("Source file not found");
        return 0;
    }

    fp2 = fopen(dest, "w");

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully");
    return 0;
}
