// print rectangle  stare take  length and width use loop
#include <stdio.h>
int main(){
    int i,j,length,width;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d",&length,&width);
    for(i=1;i<=length;i++){
        for(j=1;j<=width;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}