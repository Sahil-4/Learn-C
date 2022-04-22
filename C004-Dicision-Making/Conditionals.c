
/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Conditionals in C
Next Code : Nested-Conditional-Statements.c 
*/

#include <stdio.h>

int main() {
	// Conditional : used to perform opeations according 

	int age = 18;


	/* if statement : => 
	if (condition) {
		// code to be executed if condition is true 
	}
	*/

	// Example : 
	if (age == 18) {
		printf("You are an adult");
	}


	/* if else statement : => 
	if (condition) {
		// code to be executed if condition is true 
	} else {
		// code to be executed if condition is false 
	}
	*/

	// Example : 
	if (age > 18) {
		printf("You are an adult");
	}
	else {
		printf("You are not an adult");
	}
	

	/* if else if else statements : => 
	if (condition1) {
		// code to be executed if condition1 is true 
	}
	else if (condition2) {
		// code to be executed if condition2 is true 
	}
	else {
		// code to be executed if neither condition1 is true nor condition2 is true 
	}
	*/

	// Example :
	if (age > 21) {
		// this will execute if age is above 21 
		printf("You are an adult");
	} else if (age > 18 && age < 21) { 
		// this will execute if age is above 18 and below 21 
		printf("You are not an adult now");
	}
	else {
		// this will execute if age will less then 18 
		printf("You are not an adult");
	}
	

	// switch case statements : => 
	// switch (expression) {
	// case /* constant-expression */:
	// 	/* code */
	// 	break;
	
	// default:
	// 	break;
	// }

	// Example : 
	int n = 5;
	
	switch (n) {
	case 1:
		printf("Value is 0");
		break;
	
	case 12:
		printf("Value is 12");
		break;
	
	case 18:
		printf("Value is 18");
		break;
	
	default: // if none of above case match this default block will be executed 
		printf("Unable to match value");
		break;
	}

	return 0;	
}
