
#include <stdio.h>


// Function : A block of code that performs a specific task.
// Function Prototype : Allocating memory for a function.
// Function Definition : Implementation of the function or its statements.
// Function Call : Invoking a function or using it.


// Syntax :
// Datatype functionName(arguments); // Function prototype

// Arguments in any function are optional.

// Function declaration :
// Datatype functionName() {
//     // Function body
// }


// Let's create a function that will print "Hello" to the console.
void sayHello() {
    printf("Hello\n");
}

// Let's create a function that takes two arguments : height and width of a rectangle,
// and returns the area of that rectangle.
int rectArea(int height, int width) {
    int area = height * width;
    return area;
}


// Function Parameters and Arguments :
// In the rectArea function, 'height' and 'width' are parameters, which act as placeholders for the values
// passed as arguments when the function is called. Parameters allow the function to receive input and work
// with it internally.

// Return Values :
// The rectArea function calculates the area of a rectangle using the 'height' and 'width' parameters and
// returns the result using the 'return' statement. The return value can be captured and used in the calling
// code, as demonstrated in the 'main' function.

// Function Overloading (Not applicable in C) :
// In some programming languages, function overloading allows multiple functions with the same name but different
// parameter lists. It simplifies code organization and enhances readability, but C does not support function overloading.

// Recursive Functions :
// A recursive function is a function that calls itself. For example, a function to calculate the factorial of a
// number can be implemented using recursion. However, care must be taken to ensure termination conditions to avoid
// infinite recursion.

// Example of a Recursive Function :
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case : factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case : n! = n * (n-1)!
    }
}

// Void Functions :
// The 'sayHello' function is an example of a void function. It does not return any value and is used to print
// "Hello" to the console. Void functions are useful when the function's primary purpose is to perform actions
// without returning a result.

// Static Functions :
// In C, declaring a function as 'static' limits its scope to the current file, reducing the chance of naming conflicts
// in larger codebases. Static functions are accessible only within the file where they are defined.

// Example of a Static Function :
static int multiply(int a, int b) {
    return a * b;
}

// Function Pointers :
// Function pointers allow storing references to functions. Although not demonstrated in this code, they are useful
// for implementing callback mechanisms and dynamically selecting functions to execute.

// Example of a Function Pointer :
typedef int (*Operation)(int, int); // Define a function pointer type
int performOperation(Operation op, int x, int y) {
    return op(x, y); // Call the function using the function pointer
}

// Function Libraries :
// In larger projects, functions can be grouped into libraries, making them reusable across multiple programs. This
// promotes code organization and maintainability.

// Function Documentation :
// It's essential to document functions with comments, describing their purpose, parameters, and expected behavior.
// Clear documentation helps other developers understand and use the functions correctly.

// Function Efficiency :
// Techniques like passing arguments by reference or pointer can be used to optimize function efficiency. Avoiding
// unnecessary function calls can also improve performance.

// Function Design Principles :
// Principles like "Single Responsibility Principle" and "Keep It Simple, Stupid (KISS)" apply to designing functions
// effectively. Functions should have clear and specific tasks, making the code easier to read and maintain.


int main() {
    // functionName(); // Function call

    // Let's call the function that will print "Hello".
    sayHello();

    // Calling the rectArea function
    int area = rectArea(2, 3);
    printf("Area : %d\n", area);

    // Example of a Recursive Function :
    int num = 5;
    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);

    // Example of a Static Function :
    int result = multiply(4, 5);
    printf("Multiplication result : %d\n", result);

    // Example of a Function Pointer :
    int addition = performOperation(&multiply, 3, 4);
    printf("Addition using function pointer : %d\n", addition);


    return 0;
}
