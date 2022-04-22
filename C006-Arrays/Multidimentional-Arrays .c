
/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Multidimentional Arrays in C
*/

#include <stdio.h>

int main() {
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
