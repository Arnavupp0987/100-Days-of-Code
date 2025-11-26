<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;   
        n /= 10;         
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;   
        n /= 10;         
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
