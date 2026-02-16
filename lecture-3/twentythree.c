// question using operator
// write a progra m to count digit of a give number || cpunt kre kese bhi number me keta digi hoga 
// #include <stdio.h>  
// int main(){
//     int num, count = 0;
//     printf("Enter a positive integer: ");  
//     scanf("%d", &num);  
//     while (num != 0) {  
//         num /= 10;  
//         count++;  
//     }  
//     printf("Number of digits: %d", count);  
//     return 0;
// }



//Write a program  to print sum of  digits of a give number.
// #include <stdio.h>
// int main(){
//     int num, sum = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     printf("Sum of digits: %d", sum);
//     return 0;
// }


// // Write a program to print reverse of a given number.
// #include <stdio.h>
// int main(){
//     int num, reverse = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         reverse = reverse * 10 + num % 10;
//         num /= 10;
//     }
//     printf("Reverse of the number: %d", reverse);
//     return 0;
// }


// // write to print the sum of give number and its reverse.
// #include <stdio.h>
// int main(){
//     int num, reverse = 0, sum;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     int originalNum = num; // Store the original number for later use
//     while (num != 0) {
//         reverse = reverse * 10 + num % 10;
//         num /= 10;
//     }
//     sum = originalNum + reverse; // Calculate the sum of the original number and its reverse
//     printf("Sum of the number and its reverse: %d", sum);
//     return 0;
// }




// Print the sum of this series : 1 - 2 + 3 -4 + 5 - 6 ...upto "n".
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             sum -= i; // Subtract even numbers
//         } else {
//             sum += i; // Add odd numbers
//         }
//     }
    
//     printf("Sum of the series: %d", sum);
//     return 0;
// }

// // other method
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             sum -= i; // Subtract even numbers
//         } else {
//             sum += i; // Add odd numbers
//         }
//     }
    
//     printf("Sum of the series: %d", sum);
//     return 0;
// }



// Pritn the factorial of a given number  'n,
// #include <stdio.h>
// int main() {
//     int n, factorial = 1;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }
    
//     printf("Factorial of %d is: %d", n, factorial);
//     return 0;
// }

// // Print the factorial of first 'n' number.
// #include <stdio.h>
// int main() {
//     int n, factorial = 1;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }
    
//     printf("Factorial of %d is: %d", n, factorial);
//     return 0;
// }

// Print the nth fibonacci number.
// #include <stdio.h>
// int main() {
//     int n, a = 0, b = 1, c;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
    
//     printf("The %dth fibonacci number is: %d", n, b);
//     return 0;
// }


// // Two number are entered throught the keyboard. Write a program to find the value of one number raised to the power of another.
// #include <stdio.h>
// int main() {
//     int base, exponent, result = 1;
//     printf("Enter the base number: ");
//     scanf("%d", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
    
//     for (int i = 0; i < exponent; i++) {
//         result *= base;
//     }
    
//     printf("%d raised to the power of %d is: %d", base, exponent, result);
//     return 0;
// }

// // Write a program to print all the ASCII values and their equivalent characters of 26 alphabets  using a while loop.
// #include <stdio.h>
// int main() {
//     char ch = 'A'; // Starting with uppercase 'A'
    
//     printf("ASCII values and their equivalent characters:\n");
//     while (ch <= 'Z') { // Loop until uppercase 'Z'
//         printf("%d: %c\n", ch, ch); // Print ASCII value and character
//         ch++; // Move to the next character
//     }
    
//     return 0;
// }

// Write a program  to print out all armstong numbers between 1 and 500. if sum of cubles of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example , 153 = (1*1*1) + (5*5*5) + (3*3*3
#include <stdio.h>
int main() {
    printf("Armstrong numbers between 1 and 500 are:\n");
    for (int num = 1; num <= 500; num++) {
        int sum = 0, temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit; // Add the cube of the digit
            temp /= 10; // Remove the last digit
        }
        if (sum == num) {
            printf("%d\n", num); // Print the Armstrong number
        }
    }
    return 0;
}