#include <stdio.h> 

// int main() { 
//     printf("Hello, World!\n"); // the \n indicates a new line character
//     printf("i like pizza!\n"); // This line prints "i like pizza!" followed by a newline character to the standard output

//     return 0; // The function returns 0, indicating successful execution
//     // we could also use return EXIT_SUCCESS; from stdlib.h for better readability and to indicate successful termination of the program
// }

int main() { 
    // variable is a reusable container for a value
    int age = 25; // int is  awhole integer
    float pi = 3.14; // float is a single-precision floating-point number, which can represent decimal values with less precision than double
    double e = 2.71828; // double is a double-precision floating-point number, which can represent decimal values with more precision than float
    char initial = 'A'; // char is a single character, enclosed in single quotes
    printf("Your initial is %c\n", initial); // %c is a format specifier for characters, and initial is the variable whose value will be printed in place of %c 
    printf("eulers number is approximately %lf\n", e); // %lf is a format specifier for double-precision floating-point numbers, and e is the variable whose value will be printed in place of %lf
    printf("You are %d years old", age); 
    printf("The value of pi is approximately %f", pi); // %f is a format specifier for floating-point numbers, and pi is the variable whose value will be printed in place of %f
    // %d is a format specifier for integers, and age is the variable whose value will be printed in place of %d
}


