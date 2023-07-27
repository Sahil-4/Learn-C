
#include <stdio.h>


int main() {
    // Variable : Named memory location or value container
    // Variables are used to store data in memory


    // Syntax for declaring a variable
    // Datatype VariableName;

    // Syntax for assigning a value to a variable
    // VariableName = Value;

    // Syntax for declaring and assigning a value to a variable in one line
    // Datatype VariableName = Value;


    // Example 1
    int num; // Declaration of an integer variable
    num = 3; // Assigning value 3 to the variable 'num'
    printf("Value of num : %d\n", num); // Printing the value of 'num' to the console


    // Example 2
    char favLetter = 'A'; // Declaration and assignment of a character variable in one line
    printf("Favorite letter : %c\n", favLetter); // Printing the value of 'favLetter' to the console


    // Explanation :
    // char is the datatype of the variable used to define a character data type variable
    // favLetter is the variable name
    // '=' is the assignment operator
    // 'A' is the value assigned to favLetter
    // printf is a function used to print output to the console
    // %c is the format specifier used for character data type value


    // Changing variable's value
    int age;
    age = 10;
    printf("Age : %d\n", age); // Output : 10

    age = 12;
    printf("Age : %d\n", age); // Output : 12


    return 0;
}
