#include <stdio.h>

int main() {
    char filename[100], buffer[200];
    FILE *fp;

    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
