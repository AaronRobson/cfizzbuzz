#include <stdbool.h>
#include <stdio.h>

void fizzBuzz(int value) {
    bool shouldPrintNumber = true;
    if (value % 3 == 0) {
        printf("Fizz");
        shouldPrintNumber = false;
    }
    if (value % 5 == 0) {
        printf("Buzz");
        shouldPrintNumber = false;
    }
    if (shouldPrintNumber) {
        printf("%d", value);
    }
    printf("\n");
}

int main() {
    printf("Fizz Buzz in C:\n");
    for (int i = 1; i <= 100; i++) {
        fizzBuzz(i);
    }
    return 0;
}
