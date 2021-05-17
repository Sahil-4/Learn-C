// Datatypes.c 

#include <stdio.h>

// Datatype : 

// Primary Datatype :- 
// void : nothing 
// char: single character 
// int: integer, a whole number 
// float: floating point, a number with a fractional part 
// double: double-precision floating point value 

// Secondary Datatype :- 
// Arrays : collection of similar type of data 
// pointer : contains the address of a variable 

// user-defined data type :- 
// Structures : collection of variables of different data types represented by the same name
// Union : store data of different data types in the same memory location
// Enum or Enumeration : used to declare the variables and consists of integral constants


// Variables : 

// Syntax for declaring a Variable 
// Datatype VariableName;
// Syntax for assining value to a Variable 
// VariableName = Value;
// Sintax for declaring and assigning value to a Value at a time 
// Datatype VariableName = Value;
// we can change Variables value 


// Constant Variables : 
// We can not change constant variables 

// Types of Constant Variables : 
// Integer Constant -- 20, 2, 97, 39 
// Real Constant -- 23.19, 19992.234, 2.01 
// Character Constant -- 'a', 'x', 'e'


// format specifiers : 

// %c -- Characters
// %d -- Signed Integer
// %f -- Float numbers
// %s -- String
// %e %E -- Scientific notation
// %p -- Address

// %l -- Long
// %lf -- Long double

// %u -- Unsigned Integer
// %i -- Unsigned Integer

// %o -- Octal
// %x %X -- Hexadecimal


int main() {
	// Declaring variable Temp
	int Temp;
	// Assigning Value to Temp 
	Temp = 1;
	printf("%d", Temp); // This is how we can print an Integer Variables Value 
	// To print any Variables Value we have to use fotmat specifiers 

	// printf("Size of Integer Variable : %d \n", sizeof(Temp)); // this will return memory size taken by an integer variable 
	printf("Size of Integer Variable : %d \n", sizeof(int));


	return 0;
}


