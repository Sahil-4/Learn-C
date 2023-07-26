
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    // We have some pre-written function (peace of code snippets) defines in string.h library 
    // by these function we can minipulate and perform some operations on string -
    // Some of these function names and usage with example are given below 


    // 1. strlen : 
    // usage : Calculates the length of a given string (excluding the null-terminator).
    // Example:
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("Length of the string is: %d\n", length);


    // 2. strlwr : 
    // usage : Converts all characters of a string to lowercase.
    // Example:
    char str2[] = "HeLLo WoRLD";
    strlwr(str2);
    printf("Lowercase string: %s\n", str2);


    // 3. strcat :
    // usage : Concatenates (appends) one string to the end of another.
    // Example:
    char str3[50] = "Hello";
    char str4[] = " World!";
    strcat(str3, str4);
    printf("Concatenated string: %s\n", str3);


    // 4. strcpy :
    // usage : Copies the content of one string into another.
    // Example:
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);


    // 5. strcmp :
    // usage : Compares two strings lexicographically (ASCII value based).
    // Example:
    char str5[] = "apple";
    char str6[] = "banana";
    int result = strcmp(str5, str6);
    if (result < 0)
        printf("%s comes before %s\n", str5, str6);
    else if (result > 0)
        printf("%s comes after %s\n", str5, str6);
    else
        printf("Both strings are equal\n");


    // 6. strdup :
    // usage : Creates a duplicate of a string and returns a pointer to it (memory needs to be freed manually).
    // Example:
    char original[] = "Hello, World!";
    char *duplicate = strdup(original);
    printf("Duplicate string: %s\n", duplicate);
    // free(duplicate); // Remember to free the dynamically allocated memory.


    // 7. strchr :
    // usage : Searches for the first occurrence of a character in a string and returns a pointer to it.
    // Example:
    char str7[] = "Hello, World!";
    char ch = 'W';
    char *result7 = strchr(str7, ch);
    if (result7 != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result7 - str7);
    else
        printf("Character '%c' not found in the string.\n", ch);


    // 8. strstr :
    // usage : Searches for the first occurrence of a substring in a string and returns a pointer to it.
    // Example:
    char str8[] = "Hello, World!";
    char sub[] = "World";
    char *result8 = strstr(str8, sub);
    if (result8 != NULL)
        printf("Substring '%s' found at position: %ld\n", sub, result8 - str8);
    else
        printf("Substring '%s' not found in the string.\n", sub);


    // 9. strset :
    // usage : Sets all characters of a string to a specified character.
    // Example:
    char str9[] = "Hello, World!";
    char ch2 = '*';
    strset(str9, ch2);
    printf("Updated string: %s\n", str9);


    // 10. strrev :
    // usage : Reverses the characters in a string.
    // Example:
    char str10[] = "Hello, World!";
    strrev(str10);
    printf("Reversed string: %s\n", str10);


    return 0;
}
