// write a program to print the first 10 natural numbers using for loop use contunue statement.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}