
#include <stdio.h>


int main() {
    // Multidimensional Arrays : Arrays inside another array

    // Two-Dimensional Arrays

    // Syntax
    // Declaring and Assigning Values
    // DataType arr_2d[row_size][column_size] = {
    //     {Array1Element1, Array1Element2, Array1Element3},
    //     {Array2Element1, Array2Element2, Array2Element3}
    // };

    // Accessing Values
    // arr_2d[row_index][column_index];


    // Example
    // Declaring and Assigning Values
    // hotel[floor][room_number]
    int hotel[2][5] = {
        {0, 1, 2, 3, 4}, // floor 0 - room 0, 1, 2, 3, 4
        {0, 1, 2, 3, 4}  // floor 1 - room 0, 1, 2, 3, 4
    };

    // Accessing room number 3 at 0th floor
    printf("%d\n", hotel[0][3]);

    // Print all elements of hotel[][] array
    for (int f = 0; f < sizeof(hotel) / sizeof(hotel[0]); f++) {
        for (int r = 0; r < sizeof(hotel[0]) / sizeof(int); r++) {
            printf("%d ", hotel[f][r]);
        }
        printf("\n");
    }


    // We can create more complex arrays like
    int complex_arr[3][3][5] = {
        {
            {26, 27, 28, 29, 30},
            {41, 42, 43, 44, 45},
            {16, 17, 18, 19, 20}
        },
        {
            {46, 47, 48, 49, 50},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
        },
        {
            {36, 37, 38, 39, 40},
            {21, 22, 23, 24, 25},
            {31, 32, 33, 34, 35}
        }
    };

    // Accessing elements
    printf("%d \n", complex_arr[0][0][0]); // Output : 26

    printf("%d \n", complex_arr[0][1][2]); // Output : 43

    printf("%d \n", complex_arr[2][1][2]); // Output : 23

    printf("%d \n", complex_arr[2][2][4]); // Output : 35


    return 0;
}
