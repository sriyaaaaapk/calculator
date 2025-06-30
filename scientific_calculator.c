// scientific_calculator.c
#include <stdio.h>
#include <math.h>
#include "scientific_calculator.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846 //faced issues with math.h so defining M_PI
#endif

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
void sine() {
    double angle;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    double rad = angle * (M_PI / 180); // degrees to radians
    printf("sin(%.2lf) = %.4lf\n", angle, sin(rad));
}

void cosine() {
    double angle;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    double rad = angle * (M_PI / 180);
    printf("cos(%.2lf) = %.4lf\n", angle, cos(rad));
}

void tangent() {
    double angle;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    double rad = angle * (M_PI / 180);
    printf("tan(%.2lf) = %.4lf\n", angle, tan(rad));
}

void arcsine() {
    double value;
    printf("Enter value (-1 to 1): ");
    scanf("%lf", &value);
    printf("arcsin(%.2lf) = %.2lf degrees\n", value, asin(value) * (180 / M_PI));
}

void arccosine() {
    double value;
    printf("Enter value (-1 to 1): ");
    scanf("%lf", &value);
    printf("arccos(%.2lf) = %.2lf degrees\n", value, acos(value) * (180 / M_PI));
}

void arctangent() {
    double value;
    printf("Enter value: ");
    scanf("%lf", &value);
    printf("arctan(%.2lf) = %.2lf degrees\n", value, atan(value) * (180 / M_PI));
}

void scientific_calculator_menu() {
    int choice;
    printf("\n-- Scientific Calculator --\n");
    printf("1. Power\n2. Square Root\n3. Sine\n4. Cosine\n5. Tangent\n");
    printf("6. Arcsine\n7. Arccosine\n8. Arctangent\n9. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: power(); 
                break;
        case 2: square_root(); 
                break;
        case 3: sine(); 
                break;
        case 4: cosine(); 
                break;
        case 5: tangent(); 
                break;
        case 6: arcsine(); 
                break;
        case 7: arccosine(); 
                break;
        case 8: arctangent(); 
                break;
        case 9: return;
        default: printf("Invalid choice!\n");
    }
}
