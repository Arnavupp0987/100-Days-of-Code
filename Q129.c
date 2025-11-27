#include <stdio.h>

int main() {
    FILE *fp;
    int x, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
        return 0;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum: %d\nAverage: %.2f", sum, avg);
    return 0;
}
