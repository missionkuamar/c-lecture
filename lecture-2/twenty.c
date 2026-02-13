//if the ages of Ram , Shyam and Ajay are input through the keyboard, write a program to determine tge youngest of tge three. or sove this using nested loops
#include <stdio.h>
int main() {
    // int ram, shyam, ajay;
    // printf("Enter the age of Ram: ");
    // scanf("%d", &ram);
    // printf("Enter the age of Shyam: ");
    // scanf("%d", &shyam);
    // printf("Enter the age of Ajay: ");
    // scanf("%d", &ajay);
    // if (ram < shyam && ram < ajay) {
    //     printf("Ram is the youngest.\n");
    // } else if (shyam < ram && shyam < ajay) {
    //     printf("Shyam is the youngest.\n");
    // } else {
    //     printf("Ajay is the youngest.\n");
    // }
    // return 0;
    int ram, shyam, ajay;
    printf("Enter the age of Ram: ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);
    if (ram < shyam && ram < ajay) {
        printf("Ram is the youngest.\n");
    } else if (shyam < ram && shyam < ajay) {
        printf("Shyam is the youngest.\n");
    } else {
        printf("Ajay is the youngest.\n");
    }
    return 0;
}