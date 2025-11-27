#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e1, e2;

    printf("Enter first employee details:\n");
    scanf("%s %d %f %d %d %d", 
        e1.name, &e1.id, &e1.salary,
        &e1.joining.day, &e1.joining.month, &e1.joining.year);

    printf("Enter second employee details:\n");
    scanf("%s %d %f %d %d %d", 
        e2.name, &e2.id, &e2.salary,
        &e2.joining.day, &e2.joining.month, &e2.joining.year);

    if (strcmp(e1.name, e2.name) == 0 &&
        e1.id == e2.id &&
        e1.salary == e2.salary &&
        e1.joining.day == e2.joining.day &&
        e1.joining.month == e2.joining.month &&
        e1.joining.year == e2.joining.year) 
    {
        printf("Both structures are identical\n");
    } else {
        printf("Structures are not identical\n");
    }

    return 0;
}
