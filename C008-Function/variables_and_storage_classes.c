
#include <stdio.h>

// Automatic variables : 
// - Automatic variables are local variables declared inside a function.
// - They are created when the function is called and destroyed when the function exits.
// - They have automatic storage duration.
// - Each time the function is called, a new set of automatic variables is created.
// - They are not accessible outside the function.
void automaticFunction() {
    int num = 10; // Automatic variable
    printf("Automatic Variable: %d\n", num);
}

// External Variables :
// - External variables are global variables declared outside of any function.
// - They are accessible across multiple functions in the entire program.
// - They have external storage duration and exist throughout the program's execution.
// - They must be declared before they are used in any function.
int globalVar = 20; // External variable

void externalFunction() {
    printf("External Variable: %d\n", globalVar);
}

// Static Variables : 
// - Static variables are declared with the 'static' keyword.
// - They have internal linkage, meaning they are only accessible within the file they are declared.
// - They retain their value between function calls.
void staticFunction() {
    static int counter = 0; // Static variable
    counter++;
    printf("Static Variable: %d\n", counter);
}

// Register Variables : 
// - Register variables are declared with the 'register' keyword.
// - They are a request to the compiler to store the variable in a CPU register for faster access.
// - The 'register' keyword is just a request; the compiler may ignore it.
void registerFunction() {
    register int x = 100; // Register variable
    printf("Register Variable: %d\n", x);
}


int main() {
    printf("=== Automatic Variables ===\n");
    automaticFunction();

    printf("\n=== External Variables ===\n");
    externalFunction();

    printf("\n=== Static Variables ===\n");
    staticFunction();
    staticFunction();
    staticFunction();

    printf("\n=== Register Variables ===\n");
    registerFunction();


    return 0;
}
