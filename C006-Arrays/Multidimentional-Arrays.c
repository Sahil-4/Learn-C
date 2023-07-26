
#include <stdio.h>

int main() {
    // Multidimentional Arrays : Array inside another array 

    // Two Dimentional Arrays 

    // Syntax 
    // Declaring and Assigning Values 
    // Datatype VariableName[RowSize][ColumnSize] = {{Array1Element1, Array1Element2, Array1Element3}. {Array2Element1, Array2Element2, Array2Element3}};

    // Accessing Values 
    // VariableName[RowIndex][ColumnIndex];

    // Example 
    // Declaring and Assigning Values 
    // hotel[floor][room_number]
    int hotel[2][5] = {
        {0, 1, 2, 3, 4}, // f0 - r0, r1, r2, r3, r4
        {0, 1, 2, 3, 4}  // f1 - r0, r1, r2, r3, r4
    };

    // accessing room number 3 at 0th floor 
    printf("%d\n", hotel[0][3]);

    // print all elements of hotel[] arrayy 
    for (int f = 0; f < sizeof(hotel)/sizeof(hotel[0]); f++) {
        for (int r = 0; r < sizeof(hotel[0]) / sizeof(int); r++) {
            printf("%d ", hotel[f][r]);
        }
        printf("\n");
    }


    // we can create more complex array like 
    int complex_arr[3][3][5] = {
        {
            { 26, 27, 28, 29, 30 },
            { 41, 42, 43, 44, 45 },
            { 16, 17, 18, 19, 20 }
        },
        {
            { 46, 47, 48, 49, 50 },
            { 6, 7, 8, 9, 10 },
            { 11, 12, 13, 14, 15 }
        },
        {
            { 36, 37, 38, 39, 40 },
            { 21, 22, 23, 24, 25 },
            { 31, 32, 33, 34, 35 }
        }
    };

    // accessing elenents 
    printf("%d \n", complex_arr[0][0][0]);

    printf("%d \n", complex_arr[0][1][2]);

    printf("%d \n", complex_arr[2][1][2]);

    printf("%d \n", complex_arr[2][2][4]);


	return 0;
}
