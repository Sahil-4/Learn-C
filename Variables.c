// Variables.c

#include <stdio.h>

int main() {
    // Variable - Value Container 

    // Syntax for declaring a Variable 
// Datatype VariableName;

    // Syntax for assining value to a Variable 
    // VariableName = Value;

    // Sintax for declaring and assigning value to a Value at a time 
    // Datatype VariableName = Value;

    // Example
    // Lets create a Variable 
    int A = 1; // Here int is a keyword which define datatype of our Variable 
    // int defines integer type variable 
    // Above 
    // 'A' is variable name 
    // '=' is assignment operator used to assign value to a variable 
    // and '1' is variable value 
    // printf("%d", A); // this is how we can print variables value 
    // in above line printf() is a function used to print output in console 
    // %d is format specifier 
    // A is Variable name 

    // we have to use format specifiers to print a variables value 
    // we can learn about format specifiers in Datatypes.c 

    // Declaration vs assignment of Variable 
    int myVar; // this is variable Declaration 
    printf("%d", myVar);

    myVar = 5; // this is variable assignment 
    printf("%d", myVar);

    // Constans - Same as Variable but you cannot change it after creating it 
    // Types of Constant :
    // 1. Integer constant -- 1, 2, -299, 3000 etc 
    // 2. Real Constant - 299.39, 1.0, -29.992 etc 
    // 3. Charactor Constant - 'a', 's', 'x', '@', '&' etc 
    // we can learn about constants in Constants.c 

    // Keywords - Some reserved words by C Language
    // To learn more about Keywords check out Keywords.c

    return 0;
}