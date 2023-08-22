#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    for (uint8_t i = 1; i <= 100; i++) {
        bool shouldPrintNumber = true;
        if (i % 3 == 0) {
            printf("Fizz");
            shouldPrintNumber = false;
        }
        if (i % 5 == 0) {
            printf("Buzz");
            shouldPrintNumber = false;
        }
        if (shouldPrintNumber) {
            printf("%d", i);
        }
        printf("\n");
    }
}
