//Give a point (x,y), Write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0,0).
#include<stdio.h>
int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) does not lie on any axis.\n", x, y);
    }
    return 0;
}