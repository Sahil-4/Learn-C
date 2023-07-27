
#include <stdio.h>


int main() {
    // 1. Simple Calculator Program
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("%d %c %d = ", num1, op, num2);

    if (op == '+') {
        printf("%d\n", num1 + num2);
    } else if (op == '-') {
        printf("%d\n", num1 - num2);
    } else if (op == '*') {
        printf("%d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("Error: Cannot divide by zero.\n");
        }
    } else {
        printf("Please enter a valid operator.\n");
    }


    // 2. Finding the Biggest Integer
    int x, y, z;
    printf("Enter three integers separated by spaces: ");
    scanf("%d %d %d", &x, &y, &z);

    int biggest_int = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    printf("The biggest integer is: %d\n", biggest_int);


    // 3. Checking if a Number is Odd or Even
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is an even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }


    // 4. Finding the Biggest Integer (Using Conditional Operator)
    int a = 12, b = 46, c = 4;
    int biggest_int_conditional = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The biggest integer is: %d\n", biggest_int_conditional);


    // 5. Checking if a Character is a Vowel or Consonant
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }


    return 0;
}
