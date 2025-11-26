#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    
    while (num != 0) {
        remainder = num % 10;         
        reversed = reversed * 10 + remainder; 
        num /= 10;                    
    }

    
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
