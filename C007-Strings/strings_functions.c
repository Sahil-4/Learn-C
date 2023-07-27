
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    // We have some pre-written functions (code snippets) defined in the string.h library
    // By using these functions, we can manipulate and perform operations on strings.
    // Some of these function names and their usage with examples are given below:

    // 1. strlen:
    // Usage: Calculates the length of a given string (excluding the null-terminator).
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("Length of the string is: %d\n", length);

    // 2. strlwr:
    // Usage: Converts all characters of a string to lowercase.
    char str2[] = "HeLLo WoRLD";
    strlwr(str2);
    printf("Lowercase string: %s\n", str2);

    // 3. strcat:
    // Usage: Concatenates (appends) one string to the end of another.
    char str3[50] = "Hello";
    char str4[] = " World!";
    strcat(str3, str4);
    printf("Concatenated string: %s\n", str3);

    // 4. strcpy:
    // Usage: Copies the content of one string into another.
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // 5. strcmp:
    // Usage: Compares two strings lexicographically (ASCII value based).
    char str5[] = "apple";
    char str6[] = "banana";
    int result = strcmp(str5, str6);
    if (result < 0)
        printf("%s comes before %s\n", str5, str6);
    else if (result > 0)
        printf("%s comes after %s\n", str5, str6);
    else
        printf("Both strings are equal\n");

    // 6. strdup:
    // Usage: Creates a duplicate of a string and returns a pointer to it (memory needs to be freed manually).
    char original[] = "Hello, World!";
    char *duplicate = strdup(original);
    printf("Duplicate string: %s\n", duplicate);
    // free(duplicate); // Remember to free the dynamically allocated memory.

    // 7. strchr:
    // Usage: Searches for the first occurrence of a character in a string and returns a pointer to it.
    char str7[] = "Hello, World!";
    char ch = 'W';
    char *result7 = strchr(str7, ch);
    if (result7 != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result7 - str7);
    else
        printf("Character '%c' not found in the string.\n", ch);

    // 8. strstr:
    // Usage: Searches for the first occurrence of a substring in a string and returns a pointer to it.
    char str8[] = "Hello, World!";
    char sub[] = "World";
    char *result8 = strstr(str8, sub);
    if (result8 != NULL)
        printf("Substring '%s' found at position: %ld\n", sub, result8 - str8);
    else
        printf("Substring '%s' not found in the string.\n", sub);

    // 9. strset:
    // Usage: Sets all characters of a string to a specified character.
    char str9[] = "Hello, World!";
    char ch2 = '*';
    strset(str9, ch2);
    printf("Updated string: %s\n", str9);

    // 10. strrev:
    // Usage: Reverses the characters in a string.
    char str10[] = "Hello, World!";
    strrev(str10);
    printf("Reversed string: %s\n", str10);


    return 0;
}
