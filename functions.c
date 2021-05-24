// functions.c 

#include <stdio.h>

// function -- block of code that performs a perticular task 
// function prototype -- allocating memory for function 
// function defination -- working of function or statements 
// function call -- calling a function or using it 

// Syntax 
// Datatype FunctionName(arguments); // function prototype 

// Arguments are Optionals 

// function declaration 
// Datatype FunctionName() {
//     // function body 
// }

// lets create a function that will print Hello in console 
void SayHello() {
    printf("Hello\n");
}

// lets create a funcrion  that takes 2 arguments Height and Width of Rectangle and Return Area of that Rectangle 

int RectArea(int Height, int Width) {
    int Area =Height * Width;
    return Area;
}


int main() {
    // FunctionName(); // function call 

    // lets call the function that will print Hello 
    SayHello();

    // calling RectArea Function 
    int Area = RectArea(2, 3);
    printf("%d", Area);

    return 0;
}
