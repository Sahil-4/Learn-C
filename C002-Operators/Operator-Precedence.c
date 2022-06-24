
#include <stdio.h>

int main() {

    // Operator Precedence : tells about which operator will execute first
    // Operator Associativity : tells about which operator will execute first if we have multiple same operators

    /*
        Operator Precedence Chart :

            Operator                Meaning of operator                 Associativity
            ()                      Functional call	                    Left to right
            []                      Array element reference             Left to right
            ->                      Indirect member selection           Left to right
            .                       Direct member selection             Left to right

            !                       Logical negation                    Right to left
            ~                       Bitwise(1 's) complement            Right to left
            +                       Unary plus                          Right to left
            -                       Unary minus                         Right to left
            ++                      Increment                           Right to left
            --                      Decrement                           Right to left
            &                       Dereference (Address)               Right to left
            *                       Pointer reference                   Right to left
            sizeof                  Returns the size of an object       Right to left
            (type)                  Typecast (conversion)               Right to left

            *                       Multiply                            Left to right
            /                       Divide                              Left to right
            %                       Remainder                           Left to right

            +                       Addition                            Left to right
            -                       subtraction                         Left to right

            <<                      Left shift                          Left to right
            >>                      Right shift                         Left to right

            <                       Less than                           Left to right
            <=                      Less than or equal                  Left to right
            >                       Greater than                        Left to right
            >=                      Greater than or equal               Left to right

            ==                      Equal to                            Left to right
            !=	                    Not equal to                        Left to right

            &	                    Bitwise AND	                        Left to right
            ^	                    Bitwise exclusive OR                Left to right
            |	                    Bitwise OR	                        Left to right
            &&	                    Logical AND	                        Left to right
            ||	                    Logical OR	                        Left to right

            ?:	                    Conditional Operator	            Right to left

            =	                    Simple assignment                   Right to left
            *=                      Assign product                      Right to left
            /=                      Assign quotient                     Right to left
            %=                      Assign remainder                    Right to left
            +=                      Assign sum                          Right to left
            -=                      Assign difference                   Right to left
            &=                      Assign bitwise AND                  Right to left
            ^=                      Assign bitwise XOR                  Right to left
            |=                      Assign bitwise OR                   Right to left
            <<=                     Assign left shift                   Right to left
            >>=                     Assign right shift                  Right to left

            ,                       Seperator                           Left to Right
    */

    float val = 10 * 4 / 5;
    val = 10 / 5 * 4;
    val = 10 * 4 / 5 + 2;

    printf("%0.2f", val);

    return 0;
}
