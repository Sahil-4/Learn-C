// Example1.c 

#include <stdio.h>

void Swap1(int x, int y);
void Swap2(int *x, int *y);


int main() {
	int A, B;
	A = 3;
	B = 5;
    // Use of Pointers 
    // We can work directly on 


	printf("Before calling Swap() value of A is %d and B is %d \n", A, B);
	// Swap1(A, B);
	// Swap2(&A, &B);
	printf("After calling Swap() value of A is %d and B is %d \n", A, B);
	return 0;
}


void Swap1(int A, int B) {
    int Temp = A;
    A = B;
    B = Temp;
}

void Swap2(int *A, int *B) {
    int Temp = *A;
    *A = *B;
    *B = Temp;
}