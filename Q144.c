#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);
}

int main() {
    struct Student s1;
    scanf("%s", s1.name);
    scanf("%d", &s1.marks);
    printStudent(s1);
    return 0;
}
