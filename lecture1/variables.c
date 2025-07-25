// variables and their Declaration

// let us focus  on int data type as of now.
// 1) variables as containers:

// #include <stdio.h>
// int main (){
//     printf("Hello\n");
//     int x = 10; // variable x is a container that holds the value 10
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int  x= 5;
//     printf("%d\n",x);
//     x = 7;
//     printf("%d\n", x);
//     x = x + 6;
//     printf("%d\n",x);
//     x = x - 20;
//     printf("%d\n", x);
//     return 0;
// }

// arithmetic operation on int data type

// #include <stdio.h>
// int main (){
//     int x = 5;
//     int y = 7;
//     printf("%d\n", x + y);
//     printf("%d\n", x - y);
//     printf("%d\n", x * y);
//     printf("%d\n", x / y);
//     return 0;
// }

// floatdatatype.c

// #include <stdio.h>
// int main(){
//     float x = 3.14;
//     float y =  6.4;
//     printf("%f\n", x + y);
//     printf("%f\n", x - y);
//     printf("%f\n", x * y);
//     printf("%f\n", x / y);
//     return 0;
// }

// volumeofaSphere
// #include <stdio.h>
// int main(){
//   float r  = 5;
//   float pi = 22 / 7;
//     float v = (4 * pi * r * r * r) / 3;
//     printf("The volume of the sphere is %f\n", v);
//  return 0;
// }

// home works
// wap to to display area of circle with given;

// example: calculating percentage of 5 subjects
// #include <stdio.h>
// int main() {
//     float m1 = 100;
//     float m2 = 90;
//     float m3 = 80;
//     float m4 = 70;
//     float m5 = 60;
//     float total = m1 + m2 + m3 + m4 + m5;
//     float percentage = (total / 500) * 100;
//     printf("The percentage of 5 subjects is %f\n", percentage);

//     return 0;
// }

// home work  print percentage of 4 subjects with given marks

// variable Naming rules
// 1. variable name should be meaningful
// 2. variable name should be unique
// 3. variable name should not be a keyword
// 4. variable name should not start with a number
// 5. variable name should not be too long
//  auto, bool, char, const, double, extern, float, int,
// long, register, short, signed, static, unsigned, void, volatile

// example calculation simple interest
// float p, r, t, si;
// p = 100;
// r = 10;
// t = 5;
// si = (p * r * t) / 100;
// printf("The simple interest is %f\n", si);
// // example calculation simple interest

// #include <stdio.h>
// int main (){
//     float p, r, t, si;
//      p = 100;
//      r = 10;
//      t = 5;
//      si = (p * r * t) / 100;
//     printf("The simple interest is %f\n", si);
//     return 0;
// }

// taking Input from User
// #include <stdio.h>

// int main() {
//     float radius;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     float pi = 3.14;  // or use 3.14159 for more precision
//     float area = pi * radius * radius;

//     printf("The area of the circle is: %f\n", area);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float principal, rate, time, si;
//     printf("Enter the principal amount: ");
//     scanf("%f", &principal);
//     printf("Enter the rate of interest: ");
//     scanf("%f", &rate);
//     printf("Enter the time period: ");
//     scanf("%f", &time); 
//     si = (principal * rate * time) / 100;
//     printf("The simple interest is: %f\n", si);

//     return 0;
// }


// Taking input 
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter Your  first a number: ");
//     scanf("%d", &x);
//     int y;
//     printf("Enter Your second  number: ");
//     scanf("%d", &y);
//     printf("The sum of the two numbers is: %d\n", x + y);
//     return 0;
// }

//Taking Input 
// predict the output
// #include <stdio.h>
// int main(){
//     int p, q;
//     printf("Enter values of p and q");
//     scanf("%d %d", &p, &q);
//     printf("p = %d q = %d", p, q);
//     return 0;
// }

// Example Take two integers input , a  and b: a> b, and find the remainder when a is divided by b
// #include <stdio.h>
// int main() {
//     int a,b;
//     printf("Enter the value of a and b: ");
//     scanf("%d %d",&a,&b);
//     int q = a/b;
//      int r = a - (b*q);
//      printf("The remainder is: %d\n", r);
     
//     return 0;
// }

// moduleo oprator
// #include <stdio.h>
// int main() {
//     int a = 10, b = 3;
//     int c = a % b;
//     printf("The remainder is: %d\n", c);
//     return 0;
// }


// float to int and int to float:

// ques : take integer as input and print half of the number.
// ques : take float as input and print  fractional part of the real number.
// #include <stdio.h>
// int main() {
//     float x;
//     scanf("%f", &x);
//     int y ;
//     y = x;
//     float z = x - y;
//     printf("The fractional part of the number is: %f\n", z);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
//     printf("The value of i is: %d\n", i);
//     return 0;
// }

// Try this !
// predict the output :

// int main () {
//     int i = 2, j = 3, k, l ;
//     float a, b;
//     k = i / j * j;
//     l = j / i * i ;
//     a = i / j * j ;
//     b = j / i * i ;
//     printf("%d %d %f %f ", k, l, a, b);

// }

// char data type defchar ch = "a"
// #include <stdio.h>
// int main() {
//     char ch = 'v';
//     printf("%c\n", ch);
//     return 0;
// }

// ASCII Values  char = 'a';
#include <stdio.h>
int main() {
    char ch = 'a';
    printf("%d\n", ch);
 return 0;
}