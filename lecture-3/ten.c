// Display this GP - 1,2,4,,8,18,32,64 upto "n". terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", (i == 4) ? 18 : (1 << i)); // Using bitwise shift for powers of 2
    }
    
    printf("\n");
    return 0;
}