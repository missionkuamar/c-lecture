// Take 3 number input and tell if they can be the side of a triangle.
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("The numbers can form a triangle.\n");
    } else {
        printf("The numbers cannot form a triangle.\n");
    }
    
    return 0;
}