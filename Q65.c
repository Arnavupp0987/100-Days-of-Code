#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;

    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = 1;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found)
        printf("%d found at position %d\n", key, mid + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
