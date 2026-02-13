// Give the length  and breadth of a rectangle, write a program to find whether the area of the rectangle is greaet than its perimete . (area = length * breadth) (perimeter = 2 * (lenght + breadth))
#include <stdio.h>
int main() {
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    if (area > perimeter) {
        printf("The area of the rectangle is greater than its perimeter.\n");
    } else {
        printf("The area of the rectangle is not greater than its perimeter.\n");
    }
    
    return 0;
}