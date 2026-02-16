// Write a program to check if a number is composite  or not.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }
    return 0;
}