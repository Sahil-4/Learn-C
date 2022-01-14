// Strings.c 

#include <stdio.h>

// Strings : 1D Character Array Terminated by a null Character 
// null Character : End of String ('\0')

int main() {
	// syntax :
	// Declaration and Assignment of String 
	// char Str[] = {"A", "l", "p", "h", "a", "\0"};
	// \0 is Useful to Terminate String 

	// another way 
	// char Str[] = "Alpha"; // this will automatically convert into above string by C Compiler 
	// Accessing and Printing String 
	//  printf("%c\n", Str[0]);

    // Another way 
    // printf("%s\n", Str);

/*
    // Print String with while loop and Pointer 
    char *Ptr = Str;
    while (Ptr != '\0') {
        printf("%c", *Ptr);
        Ptr++;
    }
*/

    // taking user input 

    char firstname[10], lastname[10];
    // scanf("%s", firstname);
    // printf("%s\n", firstname);

    // scanf("%s", lastname);
    // printf("%s\n", lastname);

    // with this method we can only take a single string 
    // lets take a string that includes spaces 
    char fullname[20];
    // gets(&fullname);
    // puts(&fullname);
    // printf("%s", fullname);
	return 0;
}


