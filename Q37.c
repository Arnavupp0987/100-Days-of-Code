<<<<<<< HEAD
#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    int hcf = x;
    int lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d", a, b, lcm);

    return 0;
}
=======
#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    int hcf = x;
    int lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d", a, b, lcm);

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
