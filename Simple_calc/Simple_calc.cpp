#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int product = num1 * num2;
    std::cout << "Product: " << product << std::endl;

    return 0;
}