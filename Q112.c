#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0], curr = arr[0];

    for (int i = 1; i < n; i++) {
        if (curr < 0)
            curr = arr[i];
        else
            curr += arr[i];
        if (curr > maxSoFar)
            maxSoFar = curr;
    }

    printf("%d", maxSoFar);
    return 0;
}
