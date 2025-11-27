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
    struct Employee e, temp;
    FILE *fp;

    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter salary: ");
    scanf("%f", &e.salary);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&temp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nStored Employee Details:\n");
    printf("Name: %s\n", temp.name);
    printf("ID: %d\n", temp.id);
    printf("Salary: %.2f\n", temp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", temp.joining.day, temp.joining.month, temp.joining.year);

    return 0;
}
