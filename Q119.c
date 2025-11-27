#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], freq[n];
    
    for(int i = 0; i < n; i++) freq[i] = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        freq[arr[i]]++;
    }
    return 0;
}
