
#include <stdio.h>


int main() {
    // 1. Print "Hello C" using printf() function
    printf("Hello C\n");


    // 2. Ask user's Age as input and print "Your age is <Age>"
    int Age;
    printf("Enter your age: ");
    scanf("%d", &Age);
    printf("Your age is %d\n", Age);


    // 3. Ask user name and age as input and print => Hello <name>, your age is <age>
    char name[36]; // Initializing variable 
    printf("Enter your name: ");
    scanf("%s", name); // Taking input
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    printf("Hello %s, your age is %d\n", name, Age); // Printing output 


    // 4. Ask user's full name and age as input and print => Hello <fname lname>, your age is <age>
    char fullName[100]; // Initializing variable 
    printf("Enter your full name: ");
    getchar(); // Clearing the newline character from the buffer
    fgets(fullName, sizeof(fullName), stdin); // Taking input
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    printf("Hello %s, your age is %d\n", fullName, Age); // Printing output 

    return 0;
}
