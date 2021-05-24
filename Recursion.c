// Recursion.c 

#include <stdio.h>
// Recursion : Function calling itself 
// Example : factorian of N 

int Facto(int N) {
    if (N < 2) {
        return 1;
    }
    return N * Facto(N-1);
}

int main() {
	// calculate factorial of 5 
	int Fac = Facto(5);
	printf("%d\n", Fac);
	// find factorial of 0 to 10 
	for (int i = 0; i < 11; i++) {
	    printf("%d\n", Facto(i));
	}
	return 0;
}

