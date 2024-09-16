#include <stdio.h>

int main() {
    int numbers[10] = {3, 5, 8, 12, 15, 18, 21, 23, 27, 30};
    int target = 18; 
    int output = 0;  
    int iterations = 0;  
    int index = -1;  
    
    for (int i = 0; i < 10; i++) {
        iterations++;
        if (numbers[i] == target) {
            output = 1;  
            index = i;   
            break;
        }
    }
    if (output == 0) {
        output = 2; 
        iterations = 0;
        index = -1;
    }          
    return 0;
}
