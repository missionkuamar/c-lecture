//Give three points(x1, y1),(x2,y2) and (x3,y3), Write a program to check it all the three points fall on one straight line.
#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinates of the first point (x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates of the second point (x2,y2): ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinates of the third point (x3,y3): ");
    scanf("%d %d",&x3,&y3);
    if((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1)){
        printf("The three points are collinear.");
    }
    else{
        printf("The three points are not collinear.");
    }
    return 0;
}