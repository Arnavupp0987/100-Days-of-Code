#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (int i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    // Output
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
