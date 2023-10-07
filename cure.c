#include <stdio.h>

int main() {
    int i = 0;
    for(;;) { // here "For(;;)" means infinite loop 
        printf("%d\n", i);
        i++;
        if (i == 5) {
            break; // remove the break Statement and after excuteting the program you will get infinite value
        }
    }
    return 0;
}
