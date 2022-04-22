
/*
Author : Sahil-4
Date : December 31, 2021 
Description : In this code we will learn about Variables in C 
Next Code : Constants.c
*/

#include <stdio.h>

int main() {
    // Variable : Named memory location or Value Container 
    // Variables are used to store data in memory 

    // Syntax for declaring a Variable 
    // Datatype VariableName;

    // Syntax for assining value to a Variable 
    // VariableName = Value;

    // Sintax for declaring and assigning value to a Value in one line 
    // Datatype VariableName = Value;

    // Example 1 
    int num; // Declaration of variable 
    // above int (integer) is data type of variable and num is name of our variable 
    num = 3; // assigning value to variable 
    // in above line num is variable name and 3 is its value 
    printf("%d\n", num); // printing output to the console 
    // in above line %d is format specifier used to interact with integer datatype objects 

    // Example 2 
    char favLetter = 'A'; // Declaration and assignment of variable in one line 
    // in above line "char" is datatype "favLetter" is variable name and "A" is value 
    printf("%c\n", favLetter); // printing output to the console 


    // Explanation : 
    // char is Datatype of variable used to define charactor data type variable 
    // favLetter is variable name 
    // = is Assignment operator 
    // and A is value of favLetter 
    // printf is a function used to print output to the console 
    // %c is format specifiers used for charactor data type value 



    // Changing variables value 
    int age;
    age = 10;

    printf("%d\n", age); // output : 10 

    age = 12;
    printf("%d\n", age); // output : 12 
    return 0;
}