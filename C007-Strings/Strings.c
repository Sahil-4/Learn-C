
#include <stdio.h>


int main() {
    // Strings: 1D Character Array Terminated by a null Character
    // Null Character: End of String ('\0')

    // Syntax:
    // Declaration and Assignment of String
    // char str[] = {"A", "l", "p", "h", "a", "\0"};
    // \0 is Useful to Terminate String

    // Another way
    char str[] = "Alpha"; // This will automatically convert into the above string by C Compiler

    // Accessing and Printing String
    // printf("%c\n", str[0]);
    // Another way
    printf("%s\n", str);

    // Print String with while loop and Pointer
    char *Ptr = str;
    while (*Ptr != '\0') {
        printf("%c", *Ptr);
        Ptr++;
    }

    // Taking user input
    char firstname[10], lastname[10];
    // scanf("%s", firstname);
    // printf("%s\n", firstname);

    // scanf("%s", lastname);
    // printf("%s\n", lastname);

    // With this method, we can only take a single string
    // Let's take input of a string that includes spaces
    char fullname[20];
    // gets(fullname);
    // puts(fullname);
    // printf("%s", fullname);


    return 0;
}
