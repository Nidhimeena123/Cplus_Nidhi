#include<iostream>
using namespace std;

class Calculator {
public:
    // Function to perform addition
    float add(float a, float b) {
        return a + b;
    }

    // Function to perform subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Function to perform multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Function to perform division
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero." << endl;
            return 0; // Returning 0 as a placeholder for the division by zero error
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }

    return 0;
}

