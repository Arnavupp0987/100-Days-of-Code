#include <stdio.h>

enum Status { SUCCESS = 1, FAILURE, TIMEOUT };

int main() {
    enum Status s;

    const char *names[] = { "SUCCESS", "FAILURE", "TIMEOUT" };

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        printf("%s = %d\n", names[s - SUCCESS], s);
    }

    return 0;
}
