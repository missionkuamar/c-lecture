// Print the given pattern
// 1
//AB
// 123
//ABCD
// 12345
// take input number of rows and print the pattern using loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                printf("%d", j);
            }
            else
            {
                printf("%c", 'A' + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}