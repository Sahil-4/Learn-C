/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Variables in C
Prev Code : Keywords.c
Next Code : Operators.c
*/

#include <stdio.h>

// Datatype : Defines type of data of variable or function to store it in memory

// Primary Datatypes :-
// void : nothing
void Greet()
{
    // this is a void fuction that returns nothing
    printf("Good Morning");
}

// int: integer, a whole number
int num = 45465;

// char: single character
char ch = 'A';

// float: floating point number a number with a fractional part and a decimal part
float grades = 6.5;

// double: double-precision floating point value
double PI = 3.142857142857143;

// format specifiers to use variables :
// %c -- Characters
// %d -- Integer
// %f -- Float numbers
// %s -- String or Character Array

// %e %E -- Scientific notation
// %p -- Address

// %l -- Long
// %lf -- Long double

// %u -- Unsigned Integer
// %i -- Unsigned Integer

// %o -- Octal
// %x %X -- Hexadecimal

int main()
{
    // find Memory size of int data type
    printf("Size of an Integer Variable on this system is : %d \n", sizeof(int)); // Method sizeof(datatype-keyword) will return memory size as integer

    // the sizeof operator returns memory size allocated by a variable

    // Memory size of a char variable
    char a;
    printf("Memory size of a char variable on this system is %d\n", sizeof(a));

    // *************** Memory size may vary according to System Architecture ***************  \\

    // Secondary or Derived Datatypes :-
    // Array : collection of similar type of data
    int Marks[] = {45, 85, 62, 47, 55}; // array of integers 

    // Pointer : Stores memory address of a variable
    int *ptr = Marks;
    printf("%p\n", ptr);

    // Structure : Group of different types of variables
    struct Smartphone
    {
        int long imei;
        char model_name[20];
        float os_version;
    };

    // Union : Store different types of variable in same memory
    union car
    {
        char name[30];
        int short max_speed;
    };

    // User-defined Datatypes :-
    // Enum or Enumeration Datatype : used to declare the variables that consists of integral constants
    enum fruits
    {
        Apples = 2,
        Mangoes = 1
    };

    return 0;
}
