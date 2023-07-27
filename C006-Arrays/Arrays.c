
#include <stdio.h>


int main() {
    // Arrays : A data structure used to store a collection of similar types of data elements in contiguous memory locations.

    // Syntax :
    // Declare Array Variable :
    // Datatype VariableName[SizeOfArray];

    // Assign Values :
    // VariableName[Index] = Value;


    // Another way to Declare and Assign Values to an Array :
    // Datatype VariableName[Size] = {Value1, Value2, ValueN};
    // Here Size is optional but recommended.

    // Access Values :
    // VariableName[Index];


    // Example :
    // Declaring and Assigning Values to an Array :
    // int Marks[5]; // Declaring Array Variable of type int to store marks of 5 students.
    // Marks[0] = 43; // Assigning Value at Index 0.
    // Array Index starts from 0.

    int Marks[5] = {17, 36, 29, 50, 42};

    printf("%d", Marks[0]); // Printing Value Stored at Index 0.

    // Printing the array values with Loops.
    for (int i = 0; i < 5; i++) {
        printf("%d\n", Marks[i]);
    }

    // Assigning values to the array using a for loop.
    int nums[6];
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        printf("Enter value for index %d : ", i);
        scanf("%d", &nums[i]);
    }

    // Printing the array with Loops.
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++) {
        printf("Value at index %d is : %d\n", i, nums[i]);
    }


    return 0;
}
