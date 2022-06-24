
#include <stdio.h>

// Constant : Constant are special Variables we can not change their values 

// Types of Constant :
// 1. Integer constant   : Decimal Constant(0-9 base10), Octal Constant(0-7 base8), Hexadecimal Constant(0-F base16)
// Decimal Constant      : 0, 8, 5, 16, 245 etc
// Octal Constant        : 0, 10, 5, 20, 365 etc
// Hexadecimal Constant  : 0, A, 5, 208, F5 etc

// 2. Real Constant : 299.39, 1.0, -29.992 etc

// 3. Charactor Constant     : Single Character Constant, String Constant
// Single Character Constant : 'a', '5', 's', 'x', '@', '&' etc
// String Constant           : "Alpha", "S", "124" etc

#define Min_Age 18 // Defining constant
// while using define keyword we dont have to specify data type
// After defining a constant we cant re-declare it or re-assign its value

#define FavChar 'A' // Defining character constant 

int main() {
    printf("%d\n", Min_Age);
    printf("%c\n", FavChar);

    // Min_Age = 12; // trying to reassign constants value will give error

    // Another way to create constant
    const int Max_Age = 60;
    // while using const keyword we have to explicitly specify data type of variable 
    printf("%d\n", Max_Age);

    return 0;
}
