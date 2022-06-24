
#include <stdio.h>

int main() {
	// in C for taking input we use scanf() function 
	// and for giving output we use printf() function 

	// syntax for taking input => scanf("%format_specifier", &variable_name); 
	// syntax for giving output => printf("Data to be printed") or printf("%format_specifier", &variable_name); 
	
	// Example 
	// Lets take an integer input, store it in variable N and then print Hello variable N 
	//  to do this first create an integer variable 
	int N;
	// now specify format of input and give address of variable to scanf() function => scanf("%d", &N);
	// %d is format specifier for integer datatype 
	// & this is address operator 
	// and N is variable name 
	scanf("%d", &N); // this is how we can take integer input 

	// now lets print value of integer N 
	printf("%d", N); // this is how we can print values on output screen 


	// some other functions to take input : getchar() for charactor input, gets() for string input, fgets() also for string input 
	// some other functions to give output : putchar() for charactor output, puts() for string output 

	return 0;
}
