//multiple condition useing && and || operator

#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("%d is divisible by both 2 and 3.\n",n);
    }
    else{
        printf("%d is not divisible by both 2 and 3.\n",n);
    }
    return 0;
}