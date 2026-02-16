//Do-While Loop Write a program to print the first 10 natural numbers using do-while loop.
#include <stdio.h>  
int main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=10);
    return 0;
}