
#include <stdio.h>


// Operator: A symbol that tells the compiler to perform specific mathematical or logical operations.


int main() {
    // Arithmetic Operators: '+', '-', '*', '/', '%'
    int a = 2, b = 4;
    int sum = a + b; // Addition operator: adds 'a' and 'b' and stores the result in 'sum'
    int difference = a - b; // Subtraction operator: subtracts 'b' from 'a'
    int product = a * b; // Multiplication operator: multiplies 'a' and 'b'
    int quotient = a / b; // Division operator: divides 'a' by 'b' and truncates the result to an integer
    int remainder = a % b; // Modulus operator: calculates the remainder when 'a' is divided by 'b'

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);


    // Increment and Decrement Operators: '++', '--'
    int val = 5;
    printf("Initial Value: %d\n", val);
    printf("Post-Increment: %d\n", val++); // Post-increment: returns the value before increment
    printf("Updated Value (Post-Increment): %d\n", val);
    printf("Pre-Increment: %d\n", ++val); // Pre-increment: returns the value after increment
    printf("Updated Value (Pre-Increment): %d\n", val);

    printf("Post-Decrement: %d\n", val--); // Post-decrement: returns the value before decrement
    printf("Updated Value (Post-Decrement): %d\n", val);
    printf("Pre-Decrement: %d\n", --val); // Pre-decrement: returns the value after decrement
    printf("Updated Value (Pre-Decrement): %d\n", val);


    // Relational Operators: '==', '!=', '>', '<', '>=', '<='
    printf("Is 'a' equal to 'b'? %d\n", a == b);
    printf("Is 'a' not equal to 'b'? %d\n", a != b);
    printf("Is 'a' greater than 'b'? %d\n", a > b);
    printf("Is 'a' less than 'b'? %d\n", a < b);
    printf("Is 'a' greater than or equal to 'b'? %d\n", a >= b);
    printf("Is 'a' less than or equal to 'b'? %d\n", a <= b);


    // Assignment Operators: '+=', '-=', '*=', '/=', '%='
    int c = 10;
    c += 5; // Equivalent to: c = c + 5
    printf("c += 5: %d\n", c);

    c -= 2; // Equivalent to: c = c - 2
    printf("c -= 2: %d\n", c);

    c *= 3; // Equivalent to: c = c * 3
    printf("c *= 3: %d\n", c);

    c /= 2; // Equivalent to: c = c / 2
    printf("c /= 2: %d\n", c);

    c %= 3; // Equivalent to: c = c % 3
    printf("c %%= 3: %d\n", c);


    // Logical Operators: '&&', '||', '!'
    int p = 1, q = 0;
    int logical_and = p && q; // Logical AND: returns 1 if both 'p' and 'q' are non-zero
    int logical_or = p || q; // Logical OR: returns 1 if either 'p' or 'q' is non-zero
    int logical_not_p = !p; // Logical NOT: returns 1 if 'p' is zero, otherwise 0

    printf("Logical AND: %d\n", logical_and);
    printf("Logical OR: %d\n", logical_or);
    printf("Logical NOT (p): %d\n", logical_not_p);


    // Bitwise Operators: '&', '|', '^', '~', '<<', '>>'
    int x = 5, y = 3;
    int bitwise_and = x & y; // Bitwise AND: performs bitwise AND operation
    int bitwise_or = x | y; // Bitwise OR: performs bitwise OR operation
    int bitwise_xor = x ^ y; // Bitwise XOR: performs bitwise exclusive OR operation
    int bitwise_not_x = ~x; // Bitwise NOT: performs bitwise NOT operation (complement)
    int left_shift = x << 1; // Left Shift: shifts bits of 'x' to the left by 1 position
    int right_shift = x >> 1; // Right Shift: shifts bits of 'x' to the right by 1 position

    printf("Bitwise AND: %d\n", bitwise_and);
    printf("Bitwise OR: %d\n", bitwise_or);
    printf("Bitwise XOR: %d\n", bitwise_xor);
    printf("Bitwise NOT (x): %d\n", bitwise_not_x);
    printf("Left Shift: %d\n", left_shift);
    printf("Right Shift: %d\n", right_shift);


    // Miscellaneous Operators: '?:', 'sizeof', '&', '*', ',', etc.
    int m = 5, n = 10;
    int max = (m > n) ? m : n; // Ternary Operator: returns the maximum of 'm' and 'n'
    printf("Maximum: %d\n", max);

    int size = sizeof(int); // sizeof Operator: returns the size of 'int' in bytes
    printf("Size of int: %d bytes\n", size);

    int *address = &m; // Address of Operator: returns the memory address of 'm'
    printf("Address of m: %p\n", address);

    int *ptr = &m; // Pointer: stores the memory address of 'm'
    printf("Value of m through pointer: %d\n", *ptr);

    m = (2, 3, 4, 5, 0); // Comma Operator: evaluates multiple expressions and returns the last one
    printf("Value of m using comma operator: %d\n", m); // Output: 0


    return 0;
}
