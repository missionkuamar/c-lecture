//Display this Ap 4,7,10,13,16 upto "n". terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", 3 * i + 4);
    }
    
    printf("\n");
    return 0; 
}