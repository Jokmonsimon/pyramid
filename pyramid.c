#include <stdio.h>

void pyramid(int n) {
    char ch = 'V';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        if (i > 1) {
            for (int k = 1; k < i; k++) {
                printf("%c", ch-1);
            }
        }
        ch++;
        printf("\n");
    }
}

int main(void) {
    // Test the function with n = 4 and n = 5
    pyramid(4);
    printf("\n");
    pyramid(5);

    return 0;
}