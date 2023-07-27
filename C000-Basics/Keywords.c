
#include <stdio.h>


// Keywords : Basic building blocks for coding
// Identifiers : Names of variables or functions used to access or use a variable or function

// Global variable declared using 'extern' (without memory assignment)
extern int globalVar;


int main() {
    // Keywords in C (Total : 32)

    // int : Used to declare integer type variables
    int age = 0;

    // float : Used for declaring floating-point type variables
    float rating = 4.3f;

    // double : Used for declaring double precision floating-point type variables
    double volume = 0.3334;

    // char : Used to declare character variables
    char favChar = 'A';

    // const : Used to declare constant variables
    const int Min_Req_Age = 12;

    // short, long, signed, and unsigned : Type modifiers that alter the meaning of a base data type to yield a new type.

    // void : The void keyword denotes nothing or no value and is used to define functions that return nothing.
    void Greet() {
        printf("Good Morning\n");
    }

    // main function contains examples of different C keywords :

    // if, else : Used to create decision-making statements
    if (1 == 1) {
        printf("1 is 1\n");
    } else {
        printf("1 is not 1\n");
    }

    // for : Used to create for loops
    for (int i = 0; i < 3; i++) {
        printf("%d\n", i);
    }

    // do, while : Used to create do-while loops
    int lap = 3;
    do {
        printf("run %d\n", lap);
        lap--;
    } while (lap > 0);

    // switch, case, default : Used to create switch statements
    char Light = 'R';
    switch (Light) {
    case 'G':
        printf("Go\n");
        break;
    case 'R':
        printf("Stop\n");
        break;
    case 'Y':
        printf("Wait\n");
        break;
    default:
        break;
    }

    // break : Terminates the innermost loop immediately when it's encountered, also used to terminate the switch statement
    // continue : Skips the statements after it inside the loop for that iteration
    for (int i = 1; i <= 10; ++i) {
        if (i == 3)
            continue;
        if (i == 7) {
            printf("\n");
            break;
        }
        printf("%d ", i);
    }

    // sizeof : Used to evaluate the size of data
    printf("%d\n", sizeof(int));

    // goto : Transfers control of the program to the specified label
    int password = 73;
    for (int i = 0; i < 100; i++) {
        if (i == password)
            goto success;
    }
    printf("i is not 10\n");
success:
    printf("Success, Password cracked.\n");

    // typedef : Used to explicitly associate a type with an identifier
    typedef int wholeNumber;

    // Creating variables with identifiers
    wholeNumber Students, Classes;
    Students = 35;
    printf("%d\n", Students);

    // struct : Used for declaring a structure. A structure can hold variables of different types under a single name.
    struct Student {
        int id;
        float grades;
        int age;
    };

    // Creating a structure variable
    struct Student Student1;
    Student1.id = 89763;
    Student1.grades = 7.9;
    Student1.age = 17;

    printf("Student id : %d and Age : %d has Grades : %.1f\n", Student1.id, Student1.age, Student1.grades);

    // union : Used for grouping different types of variables under a single name
    union car {
        char name[50];
        int price;
    };

    // Creating union variables
    union car Tesla_Model_S1;

    // enum : Used to define enumeration
    enum day {
        sunday = 1,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

    // auto : Declares automatic variables
    auto int Access_Token;

    // static : Used to create a static variable. It persists until the end of the program.
    static int Key;

    // extern : Used to declare a global variable that is a variable without any memory assigned
    extern int globalVar;

    // register : Used to declare register variables
    register int counter;

    // volatile : Used for creating volatile objects
    volatile int sensorValue;

    // return : Used to return some value from a function and terminate it
    return 0;
}
