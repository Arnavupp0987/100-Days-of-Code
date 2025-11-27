#include <stdio.h>

int main() {
    char filename[100], line[200];
    FILE *fp;

    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    getchar();
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);
    printf("Text appended successfully");
    return 0;
}
