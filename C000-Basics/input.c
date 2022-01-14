// input.c 

#include <stdio.h>

int main() {
	// for taking input we use scanf() function 
	// syntax for taking input 
	// scanf("%format_specifier", &variable_name);
	// Lets take an integer input and store it in variable N to do this 
	// first create an integer variable 
	int N;
	// now give address of variable N to scanf() function 
	// & this is address operator 
	scanf("%d", &N); // this is how we can take input 
	// now lets print value of integer N 
	printf("%d", N);

	return 0;
}