
#include <stdio.h>


int main() {
    /* Do While Loop syntax =>
    do {
        // the body of the loop
    } while (testExpression);
    */

    // Working of the do-while loop :
    // The body of the do-while loop is executed once. Only then, the test expression is evaluated.
    // If the test expression is true, the body of the loop is executed again, and the test expression is evaluated once more.
    // This process goes on until the test expression becomes false.
    // If the test expression is false, the loop ends.


    // Example 1 : Printing numbers from 1 to 100 using a do-while loop
    int i = 1;

    do {
        // This will print counting from 1 to 100
        printf("%d\n", i);
        i++;
    } while (i <= 100);


    // Example 2 : Using a do-while loop with a false condition
    do {
        printf("This will be printed at least once even if the condition is false");
    } while (2 == 4);


    return 0;
}
