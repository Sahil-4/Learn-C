
#include <stdio.h>

int main() {
    // Nested Loops : Loops inside loops 
    // executing repeatitive task repeatitive times 

    // Print counting 1 to 10, 5 times 
    for (int i = 0; i < 5; i++) {
        // this block will run 5 times 

        for (int j = 1; j <= 10; j++) {
            // this block will run 10 times and print value of j 

            printf("%d\n", j);
        }

        printf("\n");
    }

    // we can create more complex loops 

    return 0;
}
