
#include <stdio.h>

int main() {

    /* While Loop syntax => 
    while (testExpression) {
        // the body of the loop 
    }
    */

    // working of While loop 
    // The while loop evaluates the testExpression inside the parentheses ().
    // If testExpression is false, the loop terminates (ends) 
    // If testExpression is true, statements inside the body of while loop are executed. 
    // Then, testExpression is evaluated again.
    // The process goes on until testExpression is evaluated to false.


    // Example : 
    int i = 1;

    while(i <= 100) {
        // this will print value of i until it reaches 100 
        printf("%d\n", i);
        i++;
    }


    // another example with break statement 
    i = 1;

    while(i <= 100) {
        printf("%d\n", i);

        // this loop will exit if value of i will be 34
        if (i == 32) {
            break;
        }
        i++;
    }


    return 0;
}
