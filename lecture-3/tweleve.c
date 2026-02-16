//Display this AP - 100, 97, 94, ...upto all terms which are positive.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int term = 100 - 3 * i;
        if (term > 0) {
            printf("%d ", term);
        } else {
            break; // Stop if the term is not positive
        }
    }
    
    printf("\n");
    return 0;
}