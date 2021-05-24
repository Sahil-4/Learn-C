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


// Keywords to declare variables 
// int - integer variable 
// char - single character variable 
// float - variable to store floaring point number 
// double - variable to store precision floating point value.

// format specifiers to use variables : 

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
	// Memory size 
	printf("Size of an Integer Variable is : %d \n", sizeof(int)); // Method sizeof(datatype-keyword) will return memory size as integer 
    // Memory size of a char variable 
    char a;
    printf("Memory size of a char variable is %d\n", sizeof(a));

    // Memory size may vary according to different system 

	return 0;
}
