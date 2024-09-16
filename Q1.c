#include <stdio.h>
int main() {
    short a = 1000;
    short b = 500;
    short b_complement = ~b + 1;
    short result = a + b_complement;
    printf("Result of %d - %d is: %d\n", a, b, result);
    return 0;
}
