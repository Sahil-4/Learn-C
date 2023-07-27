
#include <stdio.h>
#include <ctype.h>


// 1. Write a function to calculate the factorial of a non-negative integer N.
unsigned long long factorial(int N) {
    if (N == 0 || N == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return N * factorial(N - 1); // Recursive case: N! = N * (N-1)!
    }
}

// 2. Write a recursive function to calculate the Nth number in the Fibonacci series.
unsigned long long fibonacci(int N) {
    if (N == 0) {
        return 0; // Base case: Fibonacci(0) is 0
    } else if (N == 1) {
        return 1; // Base case: Fibonacci(1) is 1
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2); // Recursive case: Fibonacci(N) = Fibonacci(N-1) + Fibonacci(N-2)
    }
}

// 3. Write a function that takes two integers as arguments and returns the maximum of the two.
int max(int a, int b) {
    return (a > b) ? a : b;
}

// 4. Write a function that takes an array of integers and its length as arguments and returns the sum of all elements.
int sumArray(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum;
}

// 5. Write a recursive function to calculate the sum of all integers from 1 to N.
int sumUpToN(int N) {
    if (N == 1) {
        return 1; // Base case: Sum of integers from 1 to 1 is 1
    } else {
        return N + sumUpToN(N - 1); // Recursive case: Sum(N) = N + Sum(N-1)
    }
}

// 6. Write a function that takes an integer N as an argument and prints the Nth row of Pascal's Triangle.
void pascalsTriangle(int N) {
    int coefficient = 1;
    for (int i = 0; i <= N; i++) {
        printf("%d ", coefficient);
        coefficient = coefficient * (N - i) / (i + 1);
    }
    printf("\n");
}

// 7. Write a recursive function to calculate the power of a given base raised to a non-negative integer exponent.
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0; // Base case: Any number raised to the power of 0 is 1
    } else {
        return base * power(base, exponent - 1); // Recursive case: base^exponent = base * base^(exponent-1)
    }
}

// 8. Write a function that takes a string as an argument and returns the number of vowels in it.
int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

// 9. Write a recursive function to reverse a string.
void reverseString(char str[]) {
    static int i = 0;
    static int len = 0;
    if (len == 0) {
        while (str[len] != '\0') {
            len++;
        }
    }
    if (i < len / 2) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
        reverseString(str);
    }
}


int main() {
    printf("Factorial of 5: %llu\n", factorial(5));
    printf("7th Fibonacci number: %llu\n", fibonacci(7));
    printf("Max of 10 and 20: %d\n", max(10, 20));

    int arr[] = {1, 2, 3, 4, 5};
    printf("Sum of array elements: %d\n", sumArray(arr, 5));

    printf("Sum of integers from 1 to 10: %d\n", sumUpToN(10));

    printf("4th row of Pascal's Triangle: ");
    pascalsTriangle(4);

    printf("2.5 raised to the power of 3: %f\n", power(2.5, 3));

    char str[] = "Hello, World!";
    printf("Number of vowels in '%s': %d\n", str, countVowels(str));

    reverseString(str);
    printf("Reversed string: %s\n", str);


    return 0;
}
