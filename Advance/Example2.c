// Example2.c 

#include <stdio.h>

// Pointers with Arrays 

int main() {
	int Marks[10] = {2, 8, 5, 12, 21, 33, 5, 10, 27, 30};

	int *arrPtr;
	arrPtr = &Marks[0];
	printf("%u\n", arrPtr);
	return 0;
}


