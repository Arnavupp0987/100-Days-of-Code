#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int start = 0; start < r + c - 1; start++) {
        int i = start < r ? start : r - 1;
        int j = start - i;
        while (i >= 0 && j < c) {
            printf("%d ", a[i][j]);
            i--; 
            j++;
        }
        printf("\n");
    }

    return 0;
}
