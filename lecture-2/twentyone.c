//else if
// Take input percentage of a student and print the Grade accoridng to marks:
// 1) 90-100 Excellent
// 2) 80-90 Very Good
// 3) 70-80 Good
// 4) 60-70 Average
// 5) 50-60 Below Average
// 6) <50 Fail
#include <stdio.h>
int main() {
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);
    
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: Excellent\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: Very Good\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade: Good\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade: Average\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: Below Average\n");
    } else if (percentage < 50) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid percentage entered.\n");
    }
    
    return 0;
}