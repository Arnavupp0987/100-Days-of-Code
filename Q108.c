#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n], ans[n], left[n], right[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = left[i - 1] * nums[i - 1];

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        right[i] = right[i + 1] * nums[i + 1];

    for (int i = 0; i < n; i++)
        ans[i] = left[i] * right[i];

    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
