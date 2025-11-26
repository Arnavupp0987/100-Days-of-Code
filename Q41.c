#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;     // Last digit

    // Find first digit and number of digits
    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow10 *= 10;      // 10^(digits)
    }
    first = temp;

    // If single digit number → no change
    if (digits == 0) {
        printf("After swapping = %d\n", num);
        return 0;
    }

    // Remove first and last digits
    int middle = (num % pow10) / 10;

    // Build new number: last + middle + first
    int swapped = last * pow10 + middle * 10 + first;

    printf("After swapping first and last digit = %d\n", swapped);

    return 0;
}
