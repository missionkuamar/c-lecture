//Print the given pattern
// 1
// 13
// 135
// 1357
// 13579
// take input number of rows and print the pattern using loop
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*i-1; j+=2) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}