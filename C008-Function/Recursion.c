
#include <stdio.h>


// Recursion : A function calling itself.
// Example : factorial of N and Fibonacci series.


// Factorial Function : Calculates the factorial of a non-negative integer N.
unsigned long long factorial(int N) {
    if (N < 0) {
        return 0; // Negative numbers have no factorial.
    }
    if (N < 2) {
        return 1; // Base case : factorial of 0 and 1 is 1
    }
    return N * factorial(N - 1); // Recursive case : N! = N * (N-1)!
}

// Tail-Recursive Factorial Function : A tail-recursive version of the factorial function.
unsigned long long tailRecursiveFactorial(int N, unsigned long long result) {
    if (N < 0) {
        return 0; // Negative numbers have no factorial.
    }
    if (N < 2) {
        return result; // Base case : return the final result
    }
    return tailRecursiveFactorial(N - 1, N * result); // Tail-recursive case : multiply by N and continue
}

// Fibonacci Function : Generates the Nth number in the Fibonacci series.
unsigned long long fibonacci(int N) {
    if (N < 0) {
        return 0; // Negative numbers have no Fibonacci.
    }
    if (N == 0) {
        return 0; // Base case : Fibonacci(0) is 0
    } else if (N == 1) {
        return 1; // Base case : Fibonacci(1) is 1
    }
    return fibonacci(N - 1) + fibonacci(N - 2); // Recursive case : Fibonacci(N) = Fibonacci(N-1) + Fibonacci(N-2)
}

// Memoization for Fibonacci : Caching previously computed Fibonacci results.
unsigned long long fibonacciMemoization(int N, unsigned long long* memo) {
    if (N < 0) {
        return 0; // Negative numbers have no Fibonacci.
    }
    if (N == 0) {
        return 0; // Base case : Fibonacci(0) is 0
    } else if (N == 1) {
        return 1; // Base case : Fibonacci(1) is 1
    }
    if (memo[N] != 0) {
        return memo[N]; // Return cached result if available
    }
    memo[N] = fibonacciMemoization(N - 1, memo) + fibonacciMemoization(N - 2, memo); // Recursive case : Fibonacci(N) = Fibonacci(N-1) + Fibonacci(N-2)
    return memo[N];
}


int main() {
    // Example : Calculate factorial of 5
    int factorialOf5 = factorial(5);
    printf("Factorial of 5 : %llu\n", factorialOf5);

    // Example : Calculate factorial of 5 using tail-recursive version
    unsigned long long tailRecursiveFactorialOf5 = tailRecursiveFactorial(5, 1);
    printf("Tail-Recursive Factorial of 5 : %llu\n", tailRecursiveFactorialOf5);

    // Example : Find factorial of numbers from 0 to 10
    printf("Factorials of 0 to 10 :\n");
    for (int i = 0; i <= 10; i++) {
        printf("Factorial of %d : %llu\n", i, factorial(i));
    }

    // Example : Generate Fibonacci series for the first 10 numbers
    printf("Fibonacci series for the first 10 numbers :\n");
    for (int i = 0; i < 10; i++) {
        printf("Fibonacci(%d) : %llu\n", i, fibonacci(i));
    }

    // Example : Generate Fibonacci series for the first 10 numbers using memoization
    unsigned long long memo[11] = {0}; // Array to store Fibonacci results
    printf("Fibonacci series using memoization for the first 10 numbers :\n");
    for (int i = 0; i < 10; i++) {
        printf("Fibonacci(%d) : %llu\n", i, fibonacciMemoization(i, memo));
    }

    return 0;
}
