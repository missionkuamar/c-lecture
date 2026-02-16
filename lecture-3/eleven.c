// Display this GP - 3,12,48,... upto "n". terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", 3 * (1 << (2 * i))); // Using bitwise shift for powers of 4
    }
    
    printf("\n");
    return 0;
}