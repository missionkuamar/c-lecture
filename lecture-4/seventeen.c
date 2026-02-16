// Print the given pattern 
//*   *
// * *
//  *
// *  *
//*    *
// star Cross
// take input number of rows and print the pattern using loop make star number or row = colomns  use odd number only
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}