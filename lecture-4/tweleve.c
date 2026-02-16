//Print the given pattern
// A
//AB
//ABC
//ABCD
//ABCDE
// take input number of rows and print the pattern using loop
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf(" \n");
    }
    return 0;
}