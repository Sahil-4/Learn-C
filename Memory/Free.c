// Free.c 

#include <stdio.h>
#include <stdlib.h>

int main() {
	// lets Allocate memory for 10 integers 
	int *ptr;
	ptr = (int *) calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++) {
	    printf("%d\n", ptr[i]);
	}
	// since the Dynamically Allocated Memory dont Free Automatically we have to release it Manually 
	// to free memorh we can use free() function 
	// lets release above allocated Memory 
	for (int i = 0; i < 10; i++) {
	    free(ptr[i]);
	}

	// now lets try to access above Elements again 
	// printf("%d", ptr[0]);

	return 0;
}
