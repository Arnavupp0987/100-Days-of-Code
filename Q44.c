<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
