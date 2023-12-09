#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

/* Array of function pointers */
int (*operations[4])(int, int) = {add, subtract, multiply, divide};

int add(int a, int b) {
    printf("Adding %d and %d\n", a, b);
    return a + b;
}

int subtract(int a, int b) {
    printf("Subtracting %d from %d\n", b, a);
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying %d and %d\n", a, b);
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        printf("Dividing %d by %d\n", a, b);
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // You may choose to handle division by zero differently
    }
}

int main(void) {
    char choice;
    int result, a = 10, b = 5; // Example values

    printf("Enter a character ('0', '1', '2', '3', '4'): ");
    scanf(" %c", &choice);

    /* Validate user input and perform the operation */
    result = operations[choice - '0'](a, b);

    printf("Result: %d\n", result);

    return 0;
}