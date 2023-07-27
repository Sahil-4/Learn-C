
#include <stdio.h>


int main() {
    // Nested Loops : Loops inside loops
    // Executing repetitive tasks repetitively

    // Print counting from 1 to 10, 5 times
    for (int i = 0; i < 5; i++) {
        // This outer loop will run 5 times

        for (int j = 1; j <= 10; j++) {
            // This inner loop will run 10 times and print the value of j

            printf("%d\n", j);
        }

        printf("\n"); // This newline will be printed after each inner loop is finished
    }

    // Nested loops can be used to create more complex patterns and repetitions


    return 0;
}
