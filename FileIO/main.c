// main.c 

#include <stdio.h>

int main() {
	// File IO Basics 
	// to Open a File we have to use File Pointer 
	// Syntax 
	// FILE *Variable_Name; // to Create a File Pointer 

    // Example 
	FILE *file;// Created a File Pointer 

    // Open a File 
    // Variable_Name = fopen(Filename, Mode);

    // Example 
    // lets open a .txt file in Read Mode 
    char Filename[8] = "Demo.txt";
    char Mode[1] = "r";

    file = fopen(Filename, Mode); // this will return null if the file is not wxist 

    // now read that file 
    char content[30];
    fscanf(file, "%s", content);
    printf("%s",content);



	return 0;
}


