
#include <stdio.h>

int main() {

    /* Do While Loop syntax =>
    while (testExpression) {
        // the body of the loop
    }
    */

    // working of While loop
    // The body of do while loop is executed once. Only then, the testExpression is evaluated.
    // If testExpression is true, the body of the loop is executed again and testExpression is evaluated once more.
    // This process goes on until testExpression becomes false.
    // If testExpression is false, the loop ends.

    // Example :
    int i = 1;

    do {
        // this will print counting from 1 to 100
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    // another example
    do {
        printf("This will be printed minimum 1 time even if condition is false");
    } while (2 == 4);

    return 0;
}
