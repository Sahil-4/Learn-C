
/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Arrays in C
*/

#include <stdio.h>

// Arrays : Array is collection of similar types of elements stored at contiguous memory location 

// Syntax
// Declare Array Variable 
// Datatype VariableName[SizeOfVariable];

// Assign Values 
// VariableName[Index] = Value;

// Another way to Declare and Assign Value to Array 
// Datatype VariableName[Size] = {Value1, Value2, ValueN};
// Here Size is optional but Recommended 

// Access Values 
// VariableName[Index];


int main() {
	// Example 
    // int Marks[5];// Declaring Array Variable of Type int to store marks of 5 
    // Marks[0] = 43; // Assigning Value at Index 0 
    // Array Index Starts from 0 

    int Marks[5] = {17, 36, 29, 50, 42};

    printf("%d", Marks[0]); // printing Value Stored at Index 0 
    
    // Printing arrays with Loops 
    for (int i = 0; i < 5; i++) {
        printf("%d\n", Marks[i]);
    }

    // assigning values to array with for loop 
    int size_of_array = 6;
    int nums[size_of_array];
    for (int i = 0; i < size_of_array; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Printing arrays with Loops 
    for (int i = 0; i < size_of_array; i++) {
        printf("%d\n", nums[i]);
    }
    
	return 0;
}
