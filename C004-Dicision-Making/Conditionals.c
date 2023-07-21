
#include <stdio.h>

int main() {

	// Conditional : used to perform opeations if a specified condition is true

	/* if statement : =>
	if (condition) {
		// code to be executed if condition is true
	}
	*/

	// Example :
	int age = 18;
	if (age == 18) {
		printf("You are an adult\n");
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
		printf("You are an adult\n");
	} else {
		printf("You are not an adult\n");
	}

	/*  if else Ladder : =>
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
		printf("You are an adult\n");
	} else if (age > 18 && age < 21) {
		// this will execute if age is above 18 and below 21
		printf("You are not an adult now\n");
	} else {
		// this will execute if age will less then 18
		printf("You are not an adult\n");
	}

	/* switch case statements : =>
	switch (expression) {
	case constant-expression:
		// code
		break;

	default:
		break;
	}
	*/

	// Example :
	int n = 5;

	switch (n) {
	case 1:
		printf("Value is 0\n");
		break;

	case 12:
		printf("Value is 12\n");
		break;

	case 18:
		printf("Value is 18\n");
		break;

	default: // if none of above case match this default block will be executed
		printf("Unable to match value\n");
		break;
	}

	// Conditional Expression or Ternary Operator
	// condition ? expression1 : expression 2;

	n = 5 > 1 ? 1 : 5; // this is same as below
	/* if (5 > 1) {
		n = 5;
	}
	else {
		n = 1;
	} */

	// Break down =>
	// condition : 5 > 1
	// expression1 : return 1
	// expression2 : return 5

	printf("%d\n", n);

	// another example :
	printf("%s", 12 > 55 ? "12 is bigger then 55\n" : "55 is bigger then 12\n");

	return 0;
}
