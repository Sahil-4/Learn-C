
#include <stdio.h>

int main() {
    
	// 1. make a simple Calculator program and perform operation specified by user 
	int a, b;
	char op;
	
	printf("Enter first number : ");
	scanf("%d", &a);
	
	printf("Enter second number : ");
	scanf("%d", &b);
	
	printf("Enter operator(+, -, *, /) : ");
	scanf(" %c", &op);
	
	printf("%d %c %d = ", a, op, b);
	
	if (op == '+') {
	    printf("%d", a + b);
	} else if (op == '-') {
	    printf("%d", a - b);
	} else if (op == '*') {
	    printf("%d", a * b);
	} else if (op == '/') {
	    printf("%d", a / b);
	} else {
	    printf("please enter a valid operator");
	}
	
	
	// 2. take two integers as input and print biggest integer from them 
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	
	if (x > y) {
	    if (x > z) {
	        printf("x is bigger then y and z");
	    } else {
	        if (z > y) {
	            printf("z is bigger then x and y");
	        }
	    }
	} else {
	    if (y > z) {
	        printf("y is bigger then x and z");
	    } else {
	        printf("z is bigger then x and y");
	    }
	}


    // 3. check if given number n is odd or even 
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("even number");
    } else {
        printf("odd number");
    }

	
    // 4. you have been given three integer find the biggest one 
    int a = 12, b = 46, c = 4;
    int biggest_int = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d\n", biggest_int);
	

	// 5. check whether a char is a vowel or constant 
	char ch;
	scanf("%c", &ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		printf("%c is a vowel.", c);
	}
	else {
		printf("%c is a consonant.", c);
	}
	
    return 0;
}
