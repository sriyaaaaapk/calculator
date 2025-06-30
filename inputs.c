#include<stdio.h>
#include "inputs.h"

//getting float input from user
float gettingvalidfloat(const char *prompt){
    float value;
    int valid;
    do {
        printf("%s", prompt); //prompts the user
        valid = scanf("%f", &value);
        if (!valid){
            printf("invalid input. please enter a valid number \n");
            while (getchar() != '\n'); //clearing inout buffer
        } 
    }
    while (!valid); //keeps asking for a valid float until the users does it
    return value;
}

//getting and storing two floating values
void gettingtwofloats(float *a, float *b) {
    *a = gettingvalidfloat("Enter first number: ");
    *b = gettingvalidfloat("Enter second number: ");
}