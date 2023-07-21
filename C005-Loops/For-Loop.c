
#include <stdio.h>

int main() {

    /* For Loop syntax => 
    for (initializationStatement; testExpression; updateStatement) {
        // statements inside the body of loop
    }
    */

    // working of for loop 
    // The initialization statement is executed only once 
    // Then, the test expression is evaluated. 
    // If the test expression is evaluated to false, the for loop is terminated 
    // However, if the test expression is evaluated to true, 
    // statements inside the body of the for loop are executed, and the update Statement is executed 
    // Again the test expression is evaluated 
    // This process goes on until the test expression becomes false. 
    // When the test expression becomes false, the loop terminates 


    // Example : 
    for (int i = 1; i <= 10; i++) {
        // this will print counting from 1 to 10 
        printf("%d\n", i);
    }


    // another example with continue statement 
    for (int i = 1; i <= 10; i++) {
        // this will print counting from 1 to 10 
        if (i == 5) {
            printf("Skippibg loop if value of i is equal to 5\n");
            continue;
        }
        printf("%d\n", i);
    }
 
    return 0;
}
