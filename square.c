#include <stdio.h>

// 1. Structure to hold the "Operation" logic
// In C, we use function pointers to mimic "Dynamic Binding"
struct Operation {
    void (*calculate)(int); // Pointer to a function
};

// 2. Implementation for Square (Child behavior)
void calculateSquare(int number) {
    printf("Square of %d is: %d\n", number, (number * number));
}

// 3. Implementation for Cube (Child behavior)
void calculateCube(int number) {
    printf("Cube of %d is: %d\n", number, (number * number * number));
}

int main() {
    int num, choice;
    
    // Parent-like reference (a struct instance)
    struct Operation op;

    // Input section
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Choose operation:\n1. Square\n2. Cube\n");
    printf("Choice: ");
    scanf("%d", &choice);

    // 4. Runtime Selection (Binding the function to the pointer)
    if (choice == 1) {
        // Pointing to the square logic
        op.calculate = calculateSquare; 
    } else {
        // Pointing to the cube logic
        op.calculate = calculateCube;
    }

    // 5. Method Call (Behavioral Polymorphism)
    // The same line of code executes different functions based on the pointer
    op.calculate(num);

    return 0;
}
