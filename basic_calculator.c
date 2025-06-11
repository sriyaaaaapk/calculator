// basic_calculator.c
#include <stdio.h>
#include "basic_calculator.h"

void add() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void subtract() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiply() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void divide() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if(b != 0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Error: Division by zero!\n");
}

void basic_calculator_menu() {
    int choice;
    printf("\n-- Basic Calculator --\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: add(); break;
        case 2: subtract(); break;
        case 3: multiply(); break;
        case 4: divide(); break;
        default: printf("Invalid choice!\n");
    }
}
