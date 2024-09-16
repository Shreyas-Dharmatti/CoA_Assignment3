#include <stdio.h>

int main() {
    int numbers[15] = {10, 2, 30, 40, 57, 80, 70, 80, 9, 108, 
                       11, 122, 138, 10, 150};
    int sum = 0;
    float average;
    int *ptr = numbers;
    for (int i = 0; i < 15; i++) {
        sum += *(ptr + i); 
    }
    average = sum / 15.0;   
    printf("The average of the 15 numbers is: %.2f\n", average);
    return 0;
}