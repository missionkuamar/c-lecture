// Take positive integer input and tell if is  divisible by 5 and 3 but not divisible by 15.
#include <stdio.h>  
int main() {
    // int num;
    // printf("Enter a positive integer: ");
    // scanf("%d", &num);
    
    // if (num % 5 == 0 && num % 3 == 0 && num % 15 != 0) {
    //     printf("%d is divisible by 5 and 3 but not divisible by 15.\n", num);
    // } else {
    //     printf("%d is not divisible by 5 and 3 but not divisible by 15.\n", num);
    // }
    
    // return 0;
    // int num;
    // printf("Enter a positive integer: ");
    // scanf("%d", &num);
    
    // if (num % 5 == 0 && num % 3 == 0 && num % 15 != 0) {
    //     printf("%d is divisible by 5 and 3 but not divisible by 15.\n", num);
    // } else {
    //     printf("%d is not divisible by 5 and 3 but not divisible by 15.\n", num);
    // }
    // return 0;
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num % 5 == 0 && num % 3 == 0 && num % 15 != 0) {
        printf("%d is divisible by 5 and 3 but not divisible by 15.\n", num);
    } else {
        printf("%d is not divisible by 5 and 3 but not divisible by 15.\n", num);
    }
    
    return 0; 
}