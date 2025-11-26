<<<<<<< HEAD
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 0) {
        printf("Not a perfect number.\n");
        return 0;
    }

    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num <= 0) {
        printf("Not a perfect number.\n");
        return 0;
    }

    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
