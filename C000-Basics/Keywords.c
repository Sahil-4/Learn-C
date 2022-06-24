
#include <stdio.h>

// keywords : Basic building block for coding 
// identifier : Name of a variable or function used to access or use a variable or function

// keywords in C (Total : 32)

// int : int keyword is used to declare integer type variables
int age = 0;

// float : float keyword is used for declaring floating type variables
float rating = 4.3f;

// double : double keyword is also used for declaring floating type variables
double volume = 0.3334;

// char : char keyword used to declares a character variable
char favChar = 'A';

// const : used to declare constant variables
const int Min_Req_Age = 12;

// short, long, signed and unsigned : type modifiers that alter the meaning of a base data type to yield a new type.

// void : The void keyword meaning nothing or no value and used to define function that return nothing
void Greet() {
    printf("Good Morning\n");
}

void main() {

    // if, else : used to create deccison making statement
    if (1 == 1) {
        printf("1 is 1\n");
    }
    else {
        printf("1 is not 1\n");
    }

    // for : used to create for loop
    for (int i = 0; i < 3; i++) {
        printf("%d\n", i);
    }

    // do, while : used to create do while loop 
    int lap = 3;
    do {
        printf("run %d\n", lap);
        lap--;
    } while (lap > 0);

    // switch, case, default : create swith statements
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

    // break : terminates the innermost loop immediately when it's encountered also used to terminate the switch statement
    // continue : skips the statements after it inside the loop for that iteration
    for (int i = 1; i <= 10; ++i) {
        if (i == 3)
            continue;
        if (i == 7) {
            printf("\n");
            break;
        }
        printf("%d ", i);
    }

    // sizeof : used to evaluates the size of data
    printf("%d\n", sizeof(int));

    // goto : transfer control of the program to the specified label
    int password = 73;
    for (int i = 0; i < 100; i++) {
        if (i == password)
            goto success;
    }
    printf("i is not 10\n");
success:
    printf("Success, Password cracked.\n");

    // typedef : used to explicitly associate a type with an identifier
    typedef int wholeNumber;

    // creating variables with identifiers
    wholeNumber Students, Classes;
    Students = 35;
    printf("%d\n", Students);

    // struct : used for declaring a structure A structure can hold variables of different types under a single name
    struct Student {
        int id;
        float grades;
        int age;
    };

    // creating structure variable
    struct Student Student1;
    Student1.id = 89763;
    Student1.grades = 7.9;
    Student1.age = 17;

    printf("Student id : %d and Age : %d has Grades : %.1f\n", Student1.id, Student1.age, Student1.grades);

    // union : used for grouping different types of variables under a single name
    union car {
        char name[50];
        int price;
    };

    // Creating union variables
    union car Tesla_Model_S1;

    //  enum : used to define enumetion
    enum day
    {
        sunday = 1,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

    // auto : declares automatic variables
    auto int Access_Token;

    // static : used to creates a static variable its persists until the end of the program
    static int Key;

    // extern : used to declare a global variable that is a variable without any memory assigned 

    //  register : used to declare register variables

    // volatile : used for creating volatile objects

    // return : used to return some value from a function and terminate it
}
