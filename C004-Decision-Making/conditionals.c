
#include <stdio.h>


int main() {
    // Conditional Statements: Used to perform operations based on specified conditions.

    /* if statement:
    if (condition) {
        // code to be executed if the condition is true
    }
    */

    // Example:
    int age = 18;
    if (age == 18) {
        printf("You are an adult\n");
    }


    /* if-else statement:
    if (condition) {
        // code to be executed if the condition is true
    } else {
        // code to be executed if the condition is false
    }
    */

    // Example:
    if (age > 18) {
        printf("You are an adult\n");
    } else {
        printf("You are not an adult\n");
    }


    /* if-else Ladder:
    if (condition1) {
        // code to be executed if condition1 is true
    } else if (condition2) {
        // code to be executed if condition2 is true
    } else {
        // code to be executed if neither condition1 is true nor condition2 is true
    }
    */

    // Example:
    if (age > 21) {
        // This will execute if age is above 21
        printf("You are an adult\n");
    } else if (age > 18 && age < 21) {
        // This will execute if age is above 18 and below 21
        printf("You are not an adult yet\n");
    } else {
        // This will execute if age is less than 18
        printf("You are not an adult\n");
    }


    /* switch-case statements:
    switch (expression) {
        case constant-expression1:
            // code to be executed if expression matches constant-expression1
            break;

        case constant-expression2:
            // code to be executed if expression matches constant-expression2
            break;

        default:
            // code to be executed if expression doesn't match any constant-expression
            break;
    }
    */

    // Example:
    int n = 5;
    switch (n) {
        case 1:
            printf("Value is 1\n");
            break;

        case 12:
            printf("Value is 12\n");
            break;

        case 18:
            printf("Value is 18\n");
            break;

        default:
            printf("Unable to match value\n");
            break;
    }


    // Conditional Expression or Ternary Operator
    // condition ? expression1 : expression2;

	// Example : 
    n = 5 > 1 ? 1 : 5;
    // This is equivalent to:
    // if (5 > 1) {
    //     n = 1;
    // } else {
    //     n = 5;
    // }

    // Breakdown:
    // condition: 5 > 1 (true)
    // expression1: return 1
    // expression2: return 5

    printf("%d\n", n);


    // Another example:
    printf("%s", 12 > 55 ? "12 is bigger than 55\n" : "55 is bigger than 12\n");


    return 0;
}
