
#include <stdio.h>

// Operator : a symbol that tells the compiler to perform some specific mathematical or logical operations 

int main() {
    int a = 2, b = 4;
    int sum = a + b; // here 'a' and 'b' are operands and '+' is addition operator

    /*
        Types of operator :
            1. Arithmetic Operators
            2. Relational Operators
            3. Assignment Operators
            4. Logical Operators
            5. Bitwise Operators
            6. Misc Operators
     */


    // Arithmetic Operators : ( '+', '-', '*', '/', '%' ) : 
    // '+' Addition operator : used to add two operands
    printf("53 + 21 = %d\n", 53 + 21);

    // '−' Subtraction operator : Subtracts second operand from the first
    printf("55 - 12 = %d\n", 55 - 12);

    // '*' Multiplication operator : Multiplies both operands
    printf("12 * 21 = %d\n", 12 * 21);

    // '/' Divides numerator by de - numerator.
    printf("33 / 11 = %d\n", 33 / 11);

    // '%' Modulous operator : Used to get remainder after an integer division
    printf("33 %c 10 = %d\n", '%', 33 % 10);


    // '++'	Increment operator : increases the integer value by one
    // post increament : first use the value then increament it by one
    int val;
    val = 0;
    printf("%d\n", val++);
    printf("%d\n", val);

    // pre increament : first increament value by one then use the value
    printf("%d\n", ++val);
    printf("%d\n", val);

    // '--'	Decrement operator : decreases the integer value by one
    // post decrement : first use the value then decrement it by one
    val = 0;
    printf("%d\n", val--);
    printf("%d\n", val);

    // pre decrement : first decrement value by one then use the value
    printf("%d\n", --val);
    printf("%d\n", val);


    // Relational Operators : ('==', '!=', '>', '<', '>=', '<=') returns 1 if true or 0 if false
    // '=='	Equal to
    printf("%d\n", 2 == 2);

    // '!='	Not equal to
    printf("%d\n", 2 != 2);

    // '>'	Greater than
    printf("%d\n", 2 < 3);

    // '<'	Less than
    printf("%d\n", 2 > 2);

    // '>='	Greater than or equal to
    printf("%d\n", 2 <= 2);

    // '<='	Less than or equal to
    printf("%d\n", 2 >= 5);


    // Assignment Operators : ('+=', '-=', '*=', '/=', '%=') Assign right operand to left operand
    val = 0;
    printf("%d\n", val);

    // '+=' : Addition and Assignment Operator
    val += 5; // val = val + 5 = 5
    printf("%d\n", val);

    // '-=' : Subtraction and Assignment Operator
    val -= 2; // val = val - 2 = 3
    printf("%d\n", val);

    // '*=' : Multiplication and Assignment Operator
    val *= 16; // val = val * 16 = 48
    printf("%d\n", val);

    // '/=' : Devision and Assignment Operator
    val /= 10; // val = val / 10 = 4 (integer part of 4.8)
    printf("%d\n", val);

    // '%=' : Modulo and Assignment Operator
    val %= 3; // val = val % 3 = 1
    printf("%d\n", val);


    // Logical Operators : ('&&', '||', '!') used on more then one expressions
    // '&&' : Logical and return 1 if both expressions are true
    printf("%d\n", 2 < 5 && 12 >= 2);
    printf("%d\n", 2 > 5 && 12 >= 2);
    printf("%d\n", 2 < 5 && 12 == 2);
    printf("%d\n", 2 > 5 && 12 == 2);

    // '||' : Logical or return 1 if any one expressions is true
    printf("%d\n", 2 < 5 || 12 >= 2);
    printf("%d\n", 2 > 5 || 12 >= 2);
    printf("%d\n", 2 < 5 || 12 == 2);
    printf("%d\n", 2 > 5 || 12 == 2);

    // '!' : Logical not return 1 if expressions is false else 1
    printf("%d\n", !1);
    printf("%d\n", !0);


    // Bitwise Operators : perform operation on bits can only be worked on integers
    int res;
    // '&' : Bitwise and operator
    /*
        Bitwise and table :
        0   &   0   =   0
        0   &   1   =   0
        1   &   1   =   1
        1   &   0   =   0
    */
    res = 0 & 0; // in binary 4 = 0100, 3 = 0011    0100 & 0011 = 0000
    printf("%d\n", res);

    // '|' : Bitwise or operator
    /*
    Bitwise or table :
    0   |   0   =   0
    0   |   1   =   1
    1   |   1   =   1
    1   |   0   =   1
*/
    res = 4 | 3; // in binary 4 = 0100, 3 = 0011    0100 | 0011 = 0111 (7 in decimal)
    printf("%d\n", res);

    // '^' : Bitwise xor operator
    /*
    Bitwise xor table :
    0   ^   0   =   0
    0   ^   1   =   1
    1   ^   1   =   0
    1   ^   0   =   1
    */
    res = 4 ^ 3; // in binary 4 = 0100, 3 = 0011    0100 ^ 0011 = 0000
    printf("%d\n", res);


    // '<<' : Bitwise left shift operator : left shift left operand bits by right operand
    res = 4 << 3; // in binary 4 = 0100
    // left Shifting bits by 3 bits
    // |0|0|0|0|0|1|0|0| => |0|0|1|0|0|0|0|0| ( 00100000 in decimal : 32 )
    printf("%d\n", res);

    // '>>' : Bitwise right shift operator : right shift left operand bits by right operand
    res = 7 >> 2; // in binary 7 = 0111
    // Right Shifting bits by 2 bits
    // |0|0|0|0|0|1|1|1| => |0|0|0|0|0|0|0|1| ( 00000001 in decimal : 1 )
    printf("%d\n", res);


    // '~' : Bitwise not : return invert all bits ( 0 => 1 | 1 => 0 )
    res = ~5; // 2 in Decimal : 10
    // inverting all bits
    // 0010 => 01 (01 in binary is 1)

    printf("%d\n", res);


    // Misc operator : Miscellaneous operators used to 
    int m;

    // '?:' : ternary operator(operates on three operands) it is also an alternative for if-else condition) 
    m = 1 > 2 ? 2 : 1; // if 1 is bigger then 2 then 2 is assigned else 1 
    printf("%d \n", m);

    // 'sizeof()' : Size of Operator : Returns the size of a variable in integer 
    printf("%d \n", sizeof(m)); // this will print the memory size of integer in our system 

    // '&' : Address of Operator : Returns the address of a variable 
    printf("%p \n", &m); // this will print the address of integer variable 'm' 

    // '*' : Pointer to a variable 
    int *ptr = &m;
    printf("%d \n", ptr);

    // ',' : Comma operator : used to excute multiple expressions and assign last expressions value 
    m = (2, 3, 4, 5, 0); // using comma operator 
    printf("%d", m); // this will print 0 as 0 is the last value in above (2, 3, 4, 5, 0) 
    // we have to use parenthesis () to use comma as operator 

    return 0;
}
