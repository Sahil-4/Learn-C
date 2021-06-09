// malloc.c 

#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("Hello\n");
	int *ptr; // declaring pointer to malloc 
	ptr = (int *)malloc(5 * sizeof(int)); // Allocating Memory in Heap for 10 Integers 

    // Printing Memory Address 
	for (int i = 0; i < 5; i++) {
	    printf("Memory location of %d element is %d\n", i, &ptr[i]);
	}

    // Taking Input and Storing Values at Memory Locations 
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    // Printing Values 
    for (int i = 0; i < 5; i++) {
        printf("%u\n", ptr[i]);
    }

	return 0;
}

