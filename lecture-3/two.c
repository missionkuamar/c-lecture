// Print hello world 'n times. Take "n" as input from user 
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of times you want to print 'Hello PW': ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Hello PW\n");
    }
    
    return 0;
}