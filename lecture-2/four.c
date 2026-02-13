// Take interger input and print the absolute value of that integer
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        num = -num; // Convert to positive
    }
    
    printf("The absolute value is: %d\n", num);
    
    return 0;
}