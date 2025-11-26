<<<<<<< HEAD
#include <stdio.h>

int main() {
    int i, j, spaces;

    for(i = 5; i >= 1; i--) {
        
        // Print spaces
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int i, j, spaces;

    for(i = 5; i >= 1; i--) {
        
        // Print spaces
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
