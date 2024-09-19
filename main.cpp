// finds the bigger number of 2 inputs and stores the bigger one in another variable
// one method uses an if-else statement, the other uses the ? (ternary) operator
// code by Ryuya Hirota

#include <iostream>

int main() {
    int number1, number2;
    std::cout << "Enter number (1): " << std::endl;
    std::cin >> number1;
    std::cout << "Enter number (2): " << std::endl;
    std::cin >> number2;
    
    // if statement
    int bigger;
    if (number1 > number2) {
        bigger = number1;
    } else {
        bigger = number2;
    }
    
    // ternary operator (conditional operator)
    int bigger_ternary = number1 > number2 ? number1 : number2;
    std::cout << "The bigger number is " << bigger << " (using normal if-else statement)" << std::endl;
    std::cout << "The bigger number is " << bigger_ternary << " (using ternary operator)" << std::endl;
    
    return 0;
}
