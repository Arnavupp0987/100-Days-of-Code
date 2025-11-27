#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = -1000000000;

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += arr[j];
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
