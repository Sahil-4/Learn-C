
#include <stdio.h>

int main() {
    int age = 70;

    // Check if age is greater than 18
    if (age > 18) {
        // This block will be executed if age is above 18

        // Check if age is greater than 60
        if (age > 60) {
            // This block will be executed if age is above 60
            printf("too old\n");
        } else if (age < 60) {
            // This block will be executed for ages less than 60
            printf("welcome\n");
        }
    } else {
        // This block will be executed if age is not above 18
        printf("not an adult\n");
    }


    // Example of Nested Ternary 
    int a = 12, b = 46, c = 4;
    int biggest_int = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d\n", biggest_int);

    return 0;
}
