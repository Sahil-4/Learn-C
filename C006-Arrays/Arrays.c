
#include <stdio.h>
#include <conio.h>


// Arrays : Array is a data structure used to store collection of similar types of data element at contiguous memory location 


// Syntax 
// Declare Array Variable => 
// Datatype VariableName[SizeOfArray];

// Assign Values => 
// VariableName[Index] = Value;

// Another way to Declare and Assign Value to Array => 
// Datatype VariableName[Size] = {Value1, Value2, ValueN};
// Here Size is optional but Recommended 

// Access Values 
// VariableName[Index];


int main() {
	// Example 
    // int Marks[5]; // Declaring Array Variable of Type int to store marks of 5 
    // Marks[0] = 43; // Assigning Value at Index 0 
    // Array Index Starts from 0 

    int Marks[5] = {17, 36, 29, 50, 42};

    printf("%d", Marks[0]); // printing Value Stored at Index 0 

    // Printing arrays with Loops 
    for (int i = 0; i < 5; i++) {
        printf("%d\n", Marks[i]);
    }

    // assigning values to array with for loop 
    int nums[6];
    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("Enter value for index %d : ", i);
        scanf("%d", &nums[i]);
    }

    // Printing arrays with Loops 
    for (int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("Value at index %d is : ", i);
        printf("%d\n", nums[i]);
    }


	return 0;
}
