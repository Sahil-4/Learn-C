
#include <stdio.h>


int main() {
    // 1. Print the table of a number n
    int n;
    printf("Enter the number for the table : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // 2. Print counting from 300 to 500 using while loop
    int i = 300;
    while (i <= 500) {
        printf("%d\n", i);
        i++;
    }

    // 3. Print counting from 500 to 300 using while loop
    i = 500;
    while (i >= 300) {
        printf("%d\n", i);
        i--;
    }

    // 4. Find numbers that are divisible by n in the range 1 to 100
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Numbers divisible by %d are :\n", n);
    for (int i = 1; i <= 100; i++) {
        if (i % n == 0) {
            printf("%d\n", i);
        }
    }

    // 5. Calculate the average of n integers
    printf("Enter the number of inputs : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num = 0;
        scanf("%d", &num);
        sum += num;
    }
    printf("Average is : %d\n", sum / n);

    // 6. Find the sum of first n natural numbers
    printf("Enter a value for n : ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of first %d natural numbers is : %d\n", n, sum);

    // 7. Convert decimal to binary
    int number = 4;
    int remainder;
    int binary[10];
    int index = 0;

    do {
        remainder = number % 2;
        number = number / 2;
        binary[index] = remainder;
        index++;
    } while (number);

    printf("Binary form of 4 is ");
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    // 8. Reverse a number
    int num = 0;
    int reversedNumber = 0;
    int digit;
    printf("Enter a number to reverse : ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number is : %d\n", reversedNumber);


    return 0;
}
