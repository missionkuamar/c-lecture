// Take positive integer input and tell if it is a three digit number or not.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num >= 100 && num <= 999) {
        printf("%d is a three-digit number.\n", num);
    } else {
        printf("%d is not a three-digit number.\n", num);
    }
    
    return 0;
}