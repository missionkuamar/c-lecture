//Display this AP 1,3,5,7,9 upto "n". terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }
    
    printf("\n");
    return 0;
}