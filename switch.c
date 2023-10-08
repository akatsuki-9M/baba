// A jump table, also known as a branch table or a dispatch table,
//  is a data structure used in computer programming to implement a multiway branch.
//  It’s an array of pointers to the memory addresses of different sections of code,
//  where each pointer corresponds to a specific value or range of values that
//  the program can branch to based on the value of a variable or expression.

// Jump tables are often used to implement switch statements in low-level languages like C and C++.
//  When the switch statement is executed,
//  the program calculates the index of the appropriate case label in the 
// jump table based on the value of the expression or variable being evaluated and then
//  jumps directly to that memory address to
//  execute the statements associated with that case label.

#include <stdio.h>

void case_1() {
    printf("x is 1\n");
}

void case_2() {
    printf("x is 2\n");
}

void default_case() {
    printf("x is not 1 or 2\n");
}

int main() {
    int x = 2;
    
    switch (x) {
        case 1:
            case_1();
            break;
        case 2:
            case_2();
            break;
        default:
            default_case();
            break;
    }
    
    return 0;
}

