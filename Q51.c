<<<<<<< HEAD
#include <stdio.h>

int main() {
    int i, j, spaces, start;

    for(i = 1; i <= 5; i++) {

        
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        
        start = 6 - i;

        
        for(j = start; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {
    int i, j, spaces, start;

    for(i = 1; i <= 5; i++) {

        
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }

        
        start = 6 - i;

        
        for(j = start; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
