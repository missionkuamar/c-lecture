// give the length and breadth of  a rectangle. write a program to find the area and perimeter of the rectangle . (area = length * breadth) (perimeter = 2 * (lenght + breadth))


#include <stdio.h>
int main() {
    int length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter) {
        printf("The area of the rectangle is greater than its perimeter.\n");
    } else {
        printf("The area of the rectangle is not greater than its perimeter.\n");
    }
    return 0;
}

