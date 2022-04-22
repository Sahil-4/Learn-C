/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn how to take input and print output to console
Prev Code : Keywords.c
*/

#include <stdio.h>

int main() {
	// for taking input we use scanf() function 
	// syntax for taking input => scanf("%format_specifier", &variable_name);
	
	// Lets take an integer input and store it in variable N to do this 
	// first create an integer variable 
	int N;
	// now give address of variable N to scanf() function 
	// & this is address operator 
	// %d is format specifier for integer datatype 
	scanf("%d", &N); // this is how we can take integer input 
	// now lets print value of integer N 
	printf("%d", N); // this is how we can print values on output screen 

	return 0;
}

