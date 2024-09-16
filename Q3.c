#include <stdio.h>

int main() {
    int num1 = 15;         // First number
    int num2 = 20;         // Second number
    int gcd, lcm;
    int a = num1;
    int b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;  
    // LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
