#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n], distinct = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (matrix[i][i] == matrix[j][j])
                distinct = 0;

    if (distinct)
        printf("Distinct\n");
    else
        printf("Not distinct\n");

    return 0;
}
