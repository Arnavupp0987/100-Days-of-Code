#include <stdio.h>

int main() {
    int n;
    long long product = 1; 

    
    printf("Enter a positive number: ");
    scanf("%d", &n);

    
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    
    if (n < 2) {
        printf("No even numbers in the given range.\n");
    } else {
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
