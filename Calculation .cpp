#include <iostream>
#include <cmath>   // For sqrt(), pow(), and log()

using namespace std;

int main() {
    // Step 1: Declaring variables
    double num1, num2;

    // Step 2: Getting input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Step 3: Performing operations
    cout << "\n--- Basic Calculator Results ---" << endl;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division: Undefined (cannot divide by zero)" << endl;

    cout << "Square root of first number: " << sqrt(num1) << endl;
    cout << "First number raised to power of second: " << pow(num1, num2) << endl;

    if (num1 > 0)
        cout << "Logarithm of first number: " << log(num1) << endl;
    else
        cout << "Logarithm: Undefined for non-positive numbers" << endl;

    cout << "--------------------------------" << endl;

    return 0;
}