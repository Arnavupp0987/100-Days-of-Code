<<<<<<< HEAD
#include <stdio.h>

int main() {

    int blocks[] = {1, 3, 5, 3, 1};  
    int i, j;

    for(i = 0; i < 5; i++) {

        for(j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }

        
        if(i != 4)
            printf("\n");
    }

    return 0;
}
=======
#include <stdio.h>

int main() {

    int blocks[] = {1, 3, 5, 3, 1};  
    int i, j;

    for(i = 0; i < 5; i++) {

        for(j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }

        
        if(i != 4)
            printf("\n");
    }

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
