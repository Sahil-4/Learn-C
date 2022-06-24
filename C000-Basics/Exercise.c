
#include <stdio.h>

int main() {
    // 1. print "Hello C" usinf printf() function 
    printf("Hello C");


    // 2. ask user's Age as input and print "Your age is <Age>"
    int Age;
    scanf("%d", &Age);
    printf("Your age is %d", Age);


    // 3. Ask user name and age as input and print => Hello <name> your age is <age>
    char name[36]; // initializing variable 
    printf("Enter your name : ");
    scanf("%s", &name); // taking input 
    printf("Enter your age : ");
    scanf("%d", &Age);
    
    printf("Hello %s your age is %d", name, Age); // printing output 


    // 4. Ask users full name and age as input and print => Hello <fname lname> your age is <age>
    char name[36]; // initializing variable 
    printf("Enter your name : ");
    gets(name); // taking input 
    printf("Enter your age : ");
    scanf("%d", &Age);
    
    printf("Hello %s your age is %d", name, Age); // printing output 


    return 0;
}


