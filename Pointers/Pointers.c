// Pointers.c

#include <stdio.h>

int main() {
    // Pointer : special type of Variable Used to Store Address of A Vsriable 

    // Syntax to Declare a Pointer 
    // Datatype *Variable_Name; // now we are Ready to Store Address of any Variable 

    // Syntax to assign a Variables Memory Address 
    // PointerVariable_Name = &Variable_Name

    // Example :
    // Lets store int A variables Memory Address 
    int A = 5;
    int *Ptr = &A; // this is how we can store any Variables Memory Address in a Pointer Variable 

    // lets print address of Variable A 
    printf("Memory address of Variable A is %u\n", Ptr);
    // We can also achieve this with below 
    printf("Memory address of Variable A is %u\n", &A);

    // to store a Pointers Address 
    int **PtrsPtr = &Ptr;
    printf("Memory Address of Pointer Variable *Ptr is %u\n", PtrsPtr);

    // with helo of pointer we can directly change value of variable 

    return 0;
}