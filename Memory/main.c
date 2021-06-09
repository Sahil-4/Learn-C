// main.c 

#include <stdio.h>
#include <stdlib.h>


int main() {
	// Memory Management in C program 

    // Memory Allocation : Requesting Compiler to Reserve some Space in Memory 
    // Static Memory Allocation : Memory is Allocated at Compile Time 
    // No Memory ReUsablity 
    // less efficient 


    // Dynamic Memory Allocation : Request to Allocate Memory at Runtime 
    // Memory ReUsablity and can be freed when no needed 
    // efficient 


    // Memory Devided into 4 Parts 
    // Code or Text Segment 

    // Static/Global Variables : Data Segment & BSS Segment 

    // Data Segment : initialized Segment 
    // BSS (Block Started by Symbol) Segment : Uninitialized Segment 

    // Stack : Grow while Program Execution 
    // Stack uses LIFO data structure LIFO (Last In First Out) 
    // Automatic Memory Allocation 
    // Non-reusable memory 
    // will destroy on returning of function 

    // Stack Overflow : need More Memory then Allocated or Over usage of Memory 
    // Stack Underflow : need less Memory then Allocated or Wastage of Memory 

    // Heap : also called Dynamic Memory 
    // tree-based data structure 
    // size increases on Allocating Memory dynamically 
    // Have to Manually Allocate the Memory 
    // reusable memory 

    // We use Dynamic Memory Allocation to Save Memory and Avoid Memory Wastage 

    // functions to Allocate Dynamic Memory 

    // 1. malloc - Memory Allocation takes bytes and Allocates Memory and Return Void Pointer 
    // for Usage and Example Check Out Malloc.c 

    // 2. calloc - Continuous Allocation takes 2 Arguments Number of Elements and Size 
    // this also Set Default Value to 0 or null 
    // for Usage and Example Check Out Calloc.c 

    // 3. free - Free Allocated Memory it is a good practice to free or Release Memory when we dont need it 
    // free takes one argument Memory Address and Release Memory at that Address 
    // for Usage and Example Check Out Free.c 

    // 4. realloc -  This function re-allocates memory and extend it upto newsize 
    // takes 2 arguments old Pointer and New Size 
    // for Usage and Example Check Out Realloc.c 



	return 0;
}

