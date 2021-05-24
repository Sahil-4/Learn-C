// Adding.c 

// in this program we'll learn how to add two numbers 
// and how to create funcrion 

#include <stdio.h>

int main() {
	// Simplest way 
	// first create two integer (or other number variable)
	int NumA, NumB;
	// now assign values to them 
	NumA = 2;
	NumB = 3;
	// create a variable assign addition of both Numbers 
	 int Sum = NumA + NumB;
	printf("%d\n", Sum);
	
	// without using Extra variables 
	printf("%d \n", NumA + NumB); //print both numbers addition 
	// another way is to use a function 
	// create a Variable and assign rerurn value of AddNum function to it 
	Sum = AddNums(NumA, NumB);
	// now print value of Sum 
	printf("%d \n", Sum);
	return 0;
}

// lets Declare a function 
int AddNums(int a, int b) {
    // return sum of both arguments 
    return a + b;
}

