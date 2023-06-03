#include <stdio.h>

void fizzBuzz(int value) {
    short shouldPrintNumber = 1;
    if (value % 3 == 0) {
        printf("Fizz");
        shouldPrintNumber = 0;
    }
    if (value % 5 == 0) {
        printf("Buzz");
        shouldPrintNumber = 0;
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
