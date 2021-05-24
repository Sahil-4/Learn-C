// Example1.c 

#include <stdio.h>
// Print Arrays Value 
int main() {
	int Marks[] = {22, 17, 14, 28, 17, 50, 24, 13, 0, 10};
	// Simple way 
	// printf("%d\n", Marks[0]);
	// printf("%d\n", Marks[1]);
	// printf("%d\n", Marks[2]);
	// printf("%d\n", Marks[3]);
	// printf("%d\n", Marks[4]);

	// printing Arrays Value with help of loop 
	for (int i = 0; i < 10; i++) {
	    printf("%d\n", Marks[i]);
	}

	return 0;
}


