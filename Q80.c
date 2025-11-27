#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Invalid");
        return 0;
    }

    int a[r1][c1], b[r2][c2], mul[r1][c2];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}
