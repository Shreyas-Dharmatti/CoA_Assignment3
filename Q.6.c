#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, World!";  
    char target = 'l';             
    int index = -1;
    int check = strlen(str);               
    for (int i = 0; i < check; i++) {
        if (str[i] == target) {
            index = i;  
            break;      
        }
    }
    if (index != -1) {
        printf("Character found at index: %d\n", index);
    } else {
        printf("Character not found\n");
    }
    return 0;
}
