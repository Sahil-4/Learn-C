
#include <stdio.h>


// Function prototype for Call by Value
void callByValue(int x);

// Function prototype for Call by Reference
void callByReference(int* x);


int main() {
    int num1 = 10;
    int num2 = 20;

    // Call by Value: The function receives a copy of the value of the argument.
    // Any changes made to the parameter inside the function do not affect the original argument.
    printf("Before Call by Value - num1: %d\n", num1);
    callByValue(num1); // Call the function by value
    printf("After Call by Value - num1: %d\n", num1); // The value of num1 remains unchanged

    // Call by Reference: The function receives the memory address of the argument.
    // Any changes made to the parameter directly affect the original argument.
    printf("\nBefore Call by Reference - num2: %d\n", num2);
    callByReference(&num2); // Call the function by reference
    printf("After Call by Reference - num2: %d\n", num2); // The value of num2 is changed since it's passed by reference


    return 0;
}

// Function definition for Call by Value
void callByValue(int x) {
    // Modify the parameter value (local copy)
    x = 50;
}

// Function definition for Call by Reference
void callByReference(int* x) {
    // Modify the value pointed to by the pointer (affects the original argument)
    *x = 100;
}
