#include <stdio.h>

int main() {
    int result = 0;
    int num1= 6, num2=4;
    // Repeatedly add num1, num2 times
    for (int i = 0; i < num2; i++) {
        result += num1;
    }
    printf("The result of %d*%d is: %d\n", num1, num2, result);
    return result;
}
