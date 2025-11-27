#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0, total = n * (n + 1) / 2;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", total - sum);
    return 0;
}
