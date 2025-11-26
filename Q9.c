#include <stdio.h>

float iterative_power(float base, int exp) {
    float result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    float P, T; 
    float SI,CI,R,base;

    printf("enter principal value: ");
    scanf("%f", &P); 

    printf("enter rate of interest: ");
    scanf("%f", &R);

    printf("enter amount of time: ");
    scanf("%f", &T);

    SI = (P*R*T) / 100.0;
    base = 1 + R/100.0;
    CI = P * (iterative_power(base , T)) - P;

    printf("\nSimple interest = %f\n", SI);
    printf("Compound interest = %f\n", CI);
    
    return 0;
}