
#include <stdio.h>


int main() {
    // Loops : Used to repeat a block of code multiple times or until a condition is true

    // Types of loops in C Language :

    // 1. for loop : Used to execute a block of code multiple times
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    // 2. while loop : Used to repeat a block of code until a given condition is true
    int count = 0;
    while (count < 5) {
        printf("While loop iteration %d\n", count);
        count++;
    }

    // 3. do-while loop : Runs at least one time and then works like a while loop
    int num = 0;
    do {
        printf("Do-While loop iteration %d\n", num);
        num++;
    } while (num < 5);


    // Control Statements :

    // 1. break statement : Terminates the loop and switch statements
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("Break : %d\n", i);
    }

    // 2. continue statement : Skips the current iteration
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
        }
        printf("Continue : %d\n", i);
    }

    // 3. goto statement : Transfers control to labeled statements (avoid using goto as much as possible)
    int value = 0;
    loop_start :
    while (value < 10) {
        printf("Goto : %d\n", value);
        value++;
        if (value == 5) {
            goto loop_start;
        }
    }

    // Infinite Loop : A loop becomes infinite if the given condition will never become false.
    // Make sure that the given condition will become false at some point.


    return 0;
}
