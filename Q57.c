#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
