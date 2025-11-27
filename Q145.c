#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].marks);
    }
    
    struct Student top = getTopStudent(students, n);
    printf("Top Student: %s %d\n", top.name, top.marks);
    
    return 0;
}
