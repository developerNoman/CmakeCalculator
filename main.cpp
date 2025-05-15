#include <iostream>
#include "calculator/calculator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Example usage of the calculator functions
    int a = 5, b = 3;
    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Difference: " << subtract(a, b) << std::endl;

    return 0;
}
