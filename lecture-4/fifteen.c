// Print the given pattern 
// ***********
// *         *
// *         *
// *         *
// *         *
// *         *
// ***********
// hollow rectangle
// take input length and width of rectangle and print the pattern using loop
#include <stdio.h>
int main() {
    int length, width;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);
    
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || i == length || j == 1 || j == width) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}