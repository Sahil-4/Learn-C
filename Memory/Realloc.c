// Realloc.c 

#include <stdio.h>
#include <stdlib.h>

int main() {
	// allocating Memory for 3 Integers 
	int *ptr;
	ptr = (int *) malloc(3 * sizeof(int));
	// now lets extend above pointers size for 5 integers 
	ptr = realloc(ptr, 10 * sizeof(int));
	
	return 0;
}


