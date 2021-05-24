// Arrays.c 

#include <stdio.h>

// Arrays : Variable used to Store Collection of Similar Items 

    // Syntax
    // Declare Array Variable 
    // Datatype VariableName[SizeOfVariable];

    // Assign Values 
    // VariableName[Index] = Value;

    // Access Values 
    // VariableName[Index];

    // Another way to Declare and Assign Value to Array 
    // Datatype VariableName[Size] = {Value1, Value2, ValueN};
    // Here Size is optional but Recommended 



int main() {
	    // Example 
    // int Marks[5];// Declaring Array Variable of Type int 
    // Marks[0] = 43; // Assigning Value at Index 0 
    // Array Index Starts from 0 

    int Marks[5] = {17, 36, 29, 50, 42};

    // printf("%d", Marks[0]); // printing Value Stored at Index 0 
    
    // Printing arrays with Loops 
    for (int i = 0; i < 5; i++) {
        printf("%d\n", Marks[i]);
    }

	return 0;
}
