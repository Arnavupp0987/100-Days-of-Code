#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");
    if (fp == NULL) return 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) return 0;

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("%s %d %d\n", name, roll, marks);

    fclose(fp);
    return 0;
}
