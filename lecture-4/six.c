// Print the given pattern
// *
// **
// ***
// ****
// *****  
// take input number of rows and print the pattern using loop
//star triangle 
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}