
#include <stdio.h>


int main() {
    /* For Loop syntax => 
    for (initializationStatement; testExpression; updateStatement) {
        // statements inside the body of the loop
    }
    */

    // Working of for loop :
    // The initialization statement is executed only once.
    // Then, the test expression is evaluated.
    // If the test expression is evaluated to false, the for loop is terminated.
    // However, if the test expression is evaluated to true, statements inside the body of the for loop are executed,
    // and the update statement is executed.
    // Again, the test expression is evaluated.
    // This process goes on until the test expression becomes false.
    // When the test expression becomes false, the loop terminates.


    // Example 1 : Printing numbers from 1 to 10 using a for loop
    for (int i = 1; i <= 10; i++) {
        // This will print numbers from 1 to 10
        printf("%d\n", i);
    }


    // Example 2 : Using a continue statement to skip a specific iteration in the for loop
    for (int i = 1; i <= 10; i++) {
        // This will print numbers from 1 to 10, except for 5
        if (i == 5) {
            printf("Skipping loop if the value of i is equal to 5\n");
            continue;
        }
        printf("%d\n", i);
    }


    return 0;
}
