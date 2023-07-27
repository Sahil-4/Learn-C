
#include <stdio.h>


// Function: A block of code that performs a specific task.
// Function Prototype: Allocating memory for a function.
// Function Definition: Implementation of the function or its statements.
// Function Call: Invoking a function or using it.

// Let's create a function that will print "Hello" to the console.
void sayHello() {
    printf("Hello\n");
}

// Let's create a function that takes two arguments: height and width of a rectangle,
// and returns the area of that rectangle.
int rectArea(int height, int width) {
    int area = height * width;
    return area;
}

// Function Parameters and Arguments:
// In the rectArea function, 'height' and 'width' are parameters, which act as placeholders for the values
// passed as arguments when the function is called. Parameters allow the function to receive input and work
// with it internally.

// Return Values:
// The rectArea function calculates the area of a rectangle using the 'height' and 'width' parameters and
// returns the result using the 'return' statement. The return value can be captured and used in the calling
// code, as demonstrated in the 'main' function.

// Example of a Recursive Function:
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

// Void Functions:
// The 'sayHello' function is an example of a void function. It does not return any value and is used to print
// "Hello" to the console. Void functions are useful when the function's primary purpose is to perform actions
// without returning a result.

// Static Functions:
// In C, declaring a function as 'static' limits its scope to the current file, reducing the chance of naming conflicts
// in larger codebases. Static functions are accessible only within the file where they are defined.

// Example of a Static Function:
static int multiply(int a, int b) {
    return a * b;
}

// Function Pointers:
// Function pointers allow storing references to functions. Although not demonstrated in this code, they are useful
// for implementing callback mechanisms and dynamically selecting functions to execute.

// Example of a Function Pointer:
typedef int (*Operation)(int, int); // Define a function pointer type
int performOperation(Operation op, int x, int y) {
    return op(x, y); // Call the function using the function pointer
}


int main() {
    // Function Call
    sayHello();

    // Calling the rectArea function
    int area = rectArea(2, 3);
    printf("Area: %d\n", area);

    // Example of a Recursive Function:
    int num = 5;
    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);

    // Example of a Static Function:
    int result = multiply(4, 5);
    printf("Multiplication result: %d\n", result);

    // Example of a Function Pointer:
    int addition = performOperation(&multiply, 3, 4);
    printf("Addition using function pointer: %d\n", addition);

    return 0;
}
