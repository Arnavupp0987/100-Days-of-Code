#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;
    enum Menu option;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Menu:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    option = choice;

    switch(option) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
