// print the give pattern 
// 1234
// 1234
// 1234
// 1234
// and take input side of square and star take side use loop
#include <stdio.h>
int main()
{
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}