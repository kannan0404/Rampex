#include <stdio.h>

int main() {
    int base = 2;
    int exponent = 4;
    int result = 1;

    // Loop to calculate 2^4
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("2^4 = %d\n", result);

    return 0;
}