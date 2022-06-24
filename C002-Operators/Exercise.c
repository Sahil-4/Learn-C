
#include <stdio.h>

int main() {
	// 1. ask height and width of rectangle from user and print perimeter and area of same
	int height = 0, width = 0;

	printf("Enter height of rectangle : ");
	scanf("%d", &height);
	printf("Enter width of rectangle : ");
	scanf("%d", &width);

	printf("Area of rectangle is %d\n", height * width);
	printf("Perimeter of rectangle is %d\n", height + width);

	// 2. take input 'n' and print its cube(n*n*n) to the console
	int n = 0;
	printf("Enter value of n : ");
	scanf("%d", &n);
	printf("Cube of %d is %d\n", n, n * n * n);

	// 3. print memory address of n
	printf("Memory address of variable n is %p\n", &n);

	// 4. make a simple calculator program
	// define two integers int a and int b and perform below given operations on them
	// 1. Add a and b
	// 2. Subtract b from a (a-b)
	// 3. Find product of a and b
	// 4. devide a by b
	// 5. find remainder of 4th operation

	int a = 1, b = 1;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	// 5. Write a program to convert given days into years, weeks and days (one year is equal to 365 days)
	int days = 0, weeks, years;
	printf("Enter days : ");
	scanf("%d", &days);
	years = days / 365;
	weeks = days % 365 / 7;
	days = days - (365 * years) - (weeks * 7);
	printf("%d %d %d\n", years, weeks, days);

	
	// 6. what is the value of n
	// n = 5 + 4 * 2;
	printf("Loda : %d\n", n);


	// 7. what is the output of n 
	n = 13 * 2 + 5 + 2 - 5 * 2;
	printf("%d\n", n);

	return 0;
}
