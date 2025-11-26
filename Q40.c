<<<<<<< HEAD
#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}
=======
#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}
>>>>>>> 3984c52b78e980578c5bf104cd4754c88d3c7e43
