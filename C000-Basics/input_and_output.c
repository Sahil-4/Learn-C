#include <stdio.h>


int main() {
    // In C, we use the scanf() function to take input 
	// and the printf() function to give output.


    // Syntax for taking input : 
	// scanf("%format_specifier", &variable_name);

    // Syntax for giving output : 
	// printf("Data to be printed") 
	// or 
	// printf("%format_specifier", variable_name);


    // Example :
    // Let's take an integer input, store it in the variable N, 
	// and then print "Hello" followed by the value of N.
    // To do this, first create an integer variable.
    int N;

    // Now specify the format of the input and give the address of the variable to the scanf() function => scanf("%d", &N);
    // %d is the format specifier for the integer data type.
    // '&' is the address operator, and N is the variable name.
    scanf("%d", &N); // This is how we can take integer input.

    // Now let's print the value of the integer N.
    printf("Hello %d", N); // This is how we can print values on the output screen.


    // Some other functions to take input : 
	// getchar() for character input, 
	// gets() for string input, 
	// fgets() also for string input.

    // Some other functions to give output : 
	// putchar() for character output, 
	// puts() for string output.


    return 0;
}
