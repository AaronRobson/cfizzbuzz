#include <stdio.h>

int main() {
    for (char i = 1; i <= 100; i++) {
        char shouldPrintNumber = 1;
        if (i % 3 == 0) {
            printf("Fizz");
            shouldPrintNumber = 0;
        }
        if (i % 5 == 0) {
            printf("Buzz");
            shouldPrintNumber = 0;
        }
        if (shouldPrintNumber) {
            printf("%d", i);
        }
        printf("\n");
    }
}
