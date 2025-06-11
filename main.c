#include <stdio.h>
#include "basic_calculator.h"
#include "scientific_calculator.h"

int main() {
    int choice;
    while (1) {
        printf("\n--- Calculator ---\n");
        printf("1. Basic Calculator\n2. Scientific Calculator\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: basic_calculator_menu(); break;
            case 2: scientific_calculator_menu(); break;
            case 3: printf("Exiting Calculator.\n"); return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}