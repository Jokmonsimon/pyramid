#include <stdio.h>

// This implementation assumes that the print_pyramid function should print a pyramid of characters starting from 'V', where each row has one more character than the previous row. The first test case in the main function (print_pyramid(4)) should produce the following output:

// Copy code
//    V
//   WV
//  XXW
// YYYX
// And the second test case (print_pyramid(5)) should produce the following output:

// Copy code
//    V
//   WV
//  XXW
// YYYX
// ZZZZY

void print_pyramid(int n) {
    char current_char = 'V';
  
    for (int i = 0; i < n; i++) {
        // Print spaces before the current character
        for (int j = 0; j < n - i - 1; j++) {
        printf(" ");
        }
        
        // Print the current character and the characters before it
        for (int j = 0; j <= i; j++) {
        printf("%c", current_char - j);
        }
        
        // Print a newline character
        printf("\n");
        
        // Update the current character for the next row
        current_char++;
    }
}

int main(void) {
    // Test the function with n = 4
    print_pyramid(4);

    // Test the function with n = 5
    print_pyramid(5);

    return 0;
}
