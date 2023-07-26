
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    // 1. Print String Characters
    char greeting[] = "Hello, World!";
    for (int i = 0; i < strlen(greeting); i++) {
        printf("%c\n", greeting[i]);
    }

    // 2. Find the Length of a String
    char message[] = "This is a sample message.";
    int length = strlen(message);
    printf("Length of the string is: %d\n", length);

    // 3. Compare Two Strings
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    if (result < 0)
        printf("%s comes before %s\n", str1, str2);
    else if (result > 0)
        printf("%s comes after %s\n", str1, str2);
    else
        printf("Both strings are equal\n");

    // 4. Convert a String to Uppercase
    char text[] = "Hello, World!";
    for (int i = 0; i < strlen(text); i++) {
        text[i] = toupper(text[i]);
    }
    printf("Uppercase string: %s\n", text);

    // 5. Check if a Substring Exists in a String
    char mainStr[] = "This is a test string.";
    char subStr[] = "test";
    char *resultPtr = strstr(mainStr, subStr);
    if (resultPtr != NULL)
        printf("Substring '%s' found at position: %ld\n", subStr, resultPtr - mainStr);
    else
        printf("Substring '%s' not found in the string.\n", subStr);

    // 6. Replace a Character in a String
    char sentence[] = "I like cats.";
    char searchChar = 'c';
    char replaceChar = 'd';
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == searchChar) {
            sentence[i] = replaceChar;
        }
    }
    printf("Updated string: %s\n", sentence);

    // 7. Reverse a String
    char originalStr[] = "Hello, World!";
    char reversedStr[20];
    int len = strlen(originalStr);
    for (int i = 0; i < len; i++) {
        reversedStr[i] = originalStr[len - i - 1];
    }
    reversedStr[len] = '\0';
    printf("Reversed string: %s\n", reversedStr);


    return 0;
}
