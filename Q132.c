#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal = RED;

    if (signal == RED) printf("Stop");
    else if (signal == YELLOW) printf("Wait");
    else if (signal == GREEN) printf("Go");

    return 0;
}
