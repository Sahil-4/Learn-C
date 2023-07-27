
#include <stdio.h>


int main() {
    /* While Loop syntax => 
    while (testExpression) {
        // the body of the loop 
    }
    */

    // Working of While loop :
    // The while loop evaluates the testExpression inside the parentheses ().
    // If testExpression is false, the loop terminates (ends).
    // If testExpression is true, statements inside the body of the while loop are executed.
    // Then, testExpression is evaluated again.
    // The process goes on until testExpression is evaluated to false.


    // Example 1 : Printing numbers from 1 to 100 using a while loop
    int i = 1;

    while (i <= 100) {
        // This will print the value of i until it reaches 100
        printf("%d\n", i);
        i++;
    }


    // Example 2 : Using a break statement to exit the while loop
    i = 1;

    while (i <= 100) {
        printf("%d\n", i);

        // This loop will exit if the value of i becomes 34
        if (i == 34) {
            break;
        }
        i++;
    }


    return 0;
}
