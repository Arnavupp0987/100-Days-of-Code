#include <stdio.h>

void printBinary(unsigned int n) {
    if (n > 1)
        printBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    return 0;
}