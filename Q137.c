#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r;
    int choice;

    printf("Select Role:\n");
    printf("1. ADMIN\n2. USER\n3. GUEST\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    r = choice;

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have restricted access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
