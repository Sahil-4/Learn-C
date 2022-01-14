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
        // printf("%d\n", Marks[i]);
    }

    // Multidimentional Arrays 
    // 2 Dimentional Arrays 
    // Syntax 
    // Declaring and Assigning Values 
    // Datatype VariableName[RowSize][ColumnSize] = {{Array1Element1, Array1Element2, Array1Element3}. {Array2Element1, Array2Element2, Array2Element3}};

    // Accessing Values 
    // VariableName[RowIndex][ColumnIndex];

    // Example 
    int HotelRooms[2][5] = {{0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}}; // Declaring and Assigning Values 
    printf("%d\n", HotelRooms[0][3]);

	return 0;
}
