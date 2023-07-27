
#include <stdio.h>


// Constant : Constants are special variables whose values cannot be changed.

// Types of Constants :
// 1. Integer Constants : Decimal Constant (0-9 base 10), Octal Constant (0-7 base 8), Hexadecimal Constant (0-F base 16)
//    Decimal Constant : 0, 8, 5, 16, 245, etc.
//    Octal Constant : 0, 10, 5, 20, 365, etc.
//    Hexadecimal Constant : 0, A, 5, 208, F5, etc.

// 2. Real Constants : 299.39, 1.0, -29.992, etc.

// 3. Character Constants : Single Character Constant, String Constant
//    Single Character Constant : 'a', '5', 's', 'x', '@', '&', etc.
//    String Constant : "Alpha", "S", "124", etc.


#define Min_Age 18 // Defining an integer constant
// When using the define keyword, we don't have to specify the data type.
// After defining a constant, we can't re-declare it or re-assign its value.


#define FavChar 'A' // Defining a character constant


int main() {
    printf("Minimum Age : %d\n", Min_Age);
    printf("Favorite Character : %c\n", FavChar);

    // Min_Age = 12; // Trying to reassign a constant's value will give an error

    // Another way to create a constant
    const int Max_Age = 60;
    // When using the const keyword, we have to explicitly specify the data type of the variable.
    printf("Maximum Age : %d\n", Max_Age);

    return 0;
}
