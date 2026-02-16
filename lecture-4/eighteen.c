// Print the given pattern 
// 1
//23
//456
//78910
//floyd's triangle
// take input number of rows and print the pattern using loop
#include <stdio.h>
int main()
{
    int n, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}