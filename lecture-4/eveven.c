// Print the given pattern
//ABCD
//ABCD
//ABCD
//ABCD
//Alphabet square
// take input number of rows = colomns and print the pattern using loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}