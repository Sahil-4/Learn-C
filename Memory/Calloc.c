// Calloc.c 

#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;
	ptr = (int *) calloc(5, sizeof(int));

	// printf("%d", ptr[2000]);

	// Allocate Memory for an Array of N Elements 
	// N is given by User 
	int N, *ptr2;
	printf("Enter length of Array : ");
	scanf("%d", &N);
	ptr2 = (int *) calloc(N, sizeof(int));

	// now take Values of Elements 
	for (int i = 0; i < N; i++) {
	    printf("Enter value of Element Number %d : ", i);
	    scanf("%d", &ptr2[i]);
	}

    // now print the value of Elements 
	for (int i = 0; i < N; i++) {
	    printf("value of Element Number %d is %d \n", i, ptr2[i]);
	}

	return 0;
}
