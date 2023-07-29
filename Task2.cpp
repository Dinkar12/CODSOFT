#include <iostream>
using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0; // Return 0 to indicate an error
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Basic Calculator!" << endl;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Input the operation
    cout << "Choose the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation and display the result
    double result;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1; // Return a non-zero value to indicate an error
    }

    cout << "Result: " << result << endl;

    return 0;
}
