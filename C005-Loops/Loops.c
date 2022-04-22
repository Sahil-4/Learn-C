
/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Loops in C
*/

#include <stdio.h>

int main() {
	
	// loops : used to repeat a block of code until the specified condition is met 

	// types of loops in C Language :
	/* 1. For Loop 
	for (initializationStatement; testExpression; updateStatement) {
    	// statements inside the body of loop
	}
	*/

	// Example of for loop 
	// Print counting 1 to 100 
	for(int i = 1; i <= 100; i++) {
		printf("%d\n", i);
	}


	/* 2. While Loop 
	while (testExpression) {
  		// the body of the loop 
	}
	*/

	// Example of While loop 
	// Print counting 1 to 100 
	int i = 1;
	while (i <= 100) {
		printf("%d\n", i);
		i++; // incrementing i's value 
		// if we dont increment i's value this loop will become infinite loop and will never end 
	}


	/* 3. Do While Loop
	do {
		// the body of the loop
	} while (testExpression);
	*/

	// Example of Do While loop 
	// Print counting 1 to 100 
	i = 1; 
	do {
		printf("%d\n", i);
		i++; // incrementing i's value 
		// if we dont increment i's value this loop will become infinite loop and will never end 
	} while (i <= 100);
	// try to change value of i with 100 and run this do-while loop again 
	
	return 0;
}