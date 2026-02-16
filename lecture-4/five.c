// print the give pattern 
// 1234
// 1234
// 1234
// 1234
// and take input number of rows and columns
#include <stdio.h>
int main(){
    int rows,cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}