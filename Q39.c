<<<<<<< HEAD
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 == 1) {   
            product *= digit;
            foundOdd = 1;
        }

        num /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
=======
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 == 1) {   
            product *= digit;
            foundOdd = 1;
        }

        num /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
