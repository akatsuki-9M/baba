// #include <stdio.h>

// int main() {
//     int x = 1;
//     switch (x) {
//         case 1:
//             printf("x is 1\n");
//             // break; // removed break statement
//         case 2:
//             printf("x is 2\n");
//             // break; // removed break statement
//         default:
//             printf("x is not 1 or 2\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int x = 2;
//     switch (x) {
//         case 1:
//             printf("x is 1\n");
//             break;
//         case 2:
//             printf("x is 2\n");
//             break;
//         default:
//             printf("x is not 1 or 2\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }
    
    return 0;
}

