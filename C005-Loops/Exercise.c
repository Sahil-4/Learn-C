
#include <stdio.h>

int main() {

    // print table of number n 
	int n;
	printf("Enter number of table :");
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++) {
	    printf("%d x %d = %d\n", n, i, n*i);
	}
	
	
	// print counting from 300 to 500 using while loop 
	int i = 300;
	while (i <= 500) {
	    printf("%d\n", i);
	    i++;
	}
	
	
	// print counting from 500 to 300 using while loop 
	i = 500;
	while (i >= 300) {
	    printf("%d\n", n);
	    i--;
	}
	
	
	// find numbers that are devisible by n in range 1 to 100 
	// take n as input from user 
	n = 0;
	scanf("%d", &n);
	printf("numbers devisible by %d are : \n", n);
	for (int i = 1; i < 100; i++) {
	    if (i % n == 0) {
	        printf("%d\n", i);
	    }
	}
	
	
	// take n integers and print average of them 
	printf("Enter number of inputs : ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
	    int num = 0;
	    scanf("%d", &num);
	    sum += num;
	}
	printf("Average is : %d", sum/n);
	
	
	// find sum of first n natural numbers 
	n = 0;
	scanf("%d", &n);
	
	sum = 0;
	for (int i = 1; i <= n; i++) {
	    sum += i;
	}
	
	printf("sum of first %d numbers is : %d", n, sum);
	
	
	// Convert decimal to binary 
	int n = 4;
    int rem;
    int a[10];
    int i = 0;

    do {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    } while (n);

    for (int j = i - 1; j >= 0; j--) {
        printf("Binary form of %d is %d", n, a[j]);
    }
    
    
    // Reverse a number 
    int n = 0;
    int rem, rev;
    printf("Enter number to reverse : ");
    scanf("%d", &n);
    
    while (n != 0) {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    
    printf("%d", rev);

    return 0;
}
