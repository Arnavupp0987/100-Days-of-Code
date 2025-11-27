#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("File error");
        return 0;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "%s%d\n", name, age);
    fclose(fp);

    printf("Data saved successfully");
    return 0;
}
