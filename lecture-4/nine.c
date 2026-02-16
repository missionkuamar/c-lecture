// pritnt the give pattern
//1234567
//123456
//12345
//1234
//123
//12
//1
//number reverse triangle
// take input number of rows and print the pattern using loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}