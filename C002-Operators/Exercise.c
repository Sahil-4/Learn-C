/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will do some exercise on Operators 
*/

#include <stdio.h>

int main() {
    // 1. ask height and width of rectangle from user and print perimeter and area of same 
    int height, width;

    printf("Enter height of rectangle : ");
    scanf("%d", &height);
    printf("Enter width of rectangle : ");
    scanf("%d", &width);
    
    printf("Area of rectangle is %d\n", height*width);
    printf("Perimeter of rectangle is %d\n", height+width);


    // 2. take input 'n' and print its cube(n*n*n) to the console 
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Cube of %d is %d\n", n, n*n*n);

    // 3. print memory address of n 
    printf("Memory address of variable n is %p", &n);

    return 0;
}

