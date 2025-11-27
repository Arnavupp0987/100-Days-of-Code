#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;

    for (m = JAN; m <= DEC; m++) {
        if (m == FEB)
            printf("FEB has 28 or 29 days\n");
        else if (m == APR || m == JUN || m == SEP || m == NOV)
            printf("%d has 30 days\n", m);
        else
            printf("%d has 31 days\n", m);
    }

    return 0;
}
