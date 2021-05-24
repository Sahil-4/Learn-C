// ex1.c 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// the stdlib.h will help to use a function rand() which help us to generate random number 


// Generate Random Number 

int main() {
	int Number;
	srand(time(0));
	Number = rand()%20+1; // this will generate random number from 0 to 20 
	printf("Random Generated Number is %d\n", Number);
	return 0;
}


