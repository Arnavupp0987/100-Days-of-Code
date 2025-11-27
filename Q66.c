#include <stdio.h>

int main() {
    int n, i, key, pos;

    scanf("%d", &n);
    int arr[n + 1];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    pos = n;
    for(i = 0; i < n; i++) {
        if(key < arr[i]) {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
