
/*
Author : Sahil-4
Date : December 31, 2021
Description : In this code we will learn about Conditionals in C
Next Code : Conditional.c 
*/

#include <stdio.h>

int main() {
    int age = 70;

    if (age > 18) { // this will check first 
        // this block will execute if age is above 18 
        if (age > 60) { // this will checked first 
            // this block will be executed if age is above 60 
            printf("too old\n");
        } else if(age < 60) { // this condition will be checked if age is not above 60 
            // this will be executed for age less then 60 
            printf("welcome\n");
        }
    } else { // this will be checked if age is not above then 18 
        // this will be executed if age is less then 18 
        printf("not an adult\n");
    }

    return 0;
}
