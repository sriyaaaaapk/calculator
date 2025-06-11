// scientific_calculator.c
#include <stdio.h>
#include <math.h>
#include "scientific_calculator.h"

void power() {
    float base, exp;
    printf("Enter base and exponent: ");
    scanf("%f %f", &base, &exp);
    printf("Result: %.2f\n", pow(base, exp));
}

void square_root() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Square Root: %.2f\n", sqrt(num));
}

void scientific_calculator_menu() {
    int choice;
    printf("\n-- Scientific Calculator --\n");
    printf("1. Power\n2. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: power(); break;
        case 2: square_root(); break;
        default: printf("Invalid choice!\n");
    }
}
