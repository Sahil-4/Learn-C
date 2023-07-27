
#include <stdio.h>


// Data Type : Defines the type of data of a variable or function to store it in memory.

// Primary Data Types :
// void : Represents nothing or no value. Used for functions that return nothing.
void Greet() {
    printf("Good Morning");
}

// int : Represents integers (whole numbers).
int num = 45465;

// char : Represents single characters.
char ch = 'A';

// float : Represents floating-point numbers with a fractional part and a decimal part.
float grades = 6.5;

// double : Represents double-precision floating-point values.
double PI = 3.142857142857143;

// Format specifiers to use with printf() to display variables :
// %c : Characters
// %d : Integers
// %f : Float numbers
// %s : Strings or Character Arrays

// %e %E : Scientific notation
// %p : Address

// %l : Long
// %lf : Long double

// %u : Unsigned Integer
// %i : Integer

// %o : Octal
// %x %X : Hexadecimal


int main() {
    // Find the memory size of the int data type.
    printf("Size of an Integer Variable on this system is : %d bytes\n", sizeof(int));

    // The sizeof operator returns the memory size allocated by a variable.

    // Memory size of a char variable.
    char a;
    printf("Memory size of a char variable on this system is : %d bytes\n", sizeof(a));

    // *************** Memory size may vary according to System Architecture *************** //

    // Secondary or Derived Data Types :
    // Array : A collection of similar types of data.
    int Marks[] = {45, 85, 62, 47, 55}; // Array of integers.

    // Pointer : Stores the memory address of a variable.
    int *ptr = Marks;
    printf("%p\n", ptr);

    // Structure : A group of different types of variables.
    struct Smartphone {
        long imei;
        char model_name[20];
        float os_version;
    };

    // Union : Stores different types of variables in the same memory.
    union car {
        char name[30];
        short max_speed;
    };

    // User-defined Data Types :
    // Enum or Enumeration Data Type : Used to declare variables that consist of integral constants.
    enum fruits {
        Apples = 2,
        Mangoes = 1
    };


    return 0;
}
