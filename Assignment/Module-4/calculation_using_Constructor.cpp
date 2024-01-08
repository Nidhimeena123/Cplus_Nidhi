#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize the numbers
    Calculator(double a, double b) {
	      num1 = a;
	      num2 = b;
	}

    // Member function for addition
    double add() {
        return num1 + num2;
    }

    // Member function for subtraction
    double subtract() {
        return num1 - num2;
    }

    // Member function for division
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero." << endl;
            return 0; 
        }
    }

    // Member function for multiplication
    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double a, b;

    // Input numbers from the user
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    Calculator myCalculator(a, b);

    // display addition
    cout << "Addition: " << myCalculator.add() << endl;

    // display subtraction
    cout << "Subtraction: " << myCalculator.subtract() << endl;

    // display division
    cout << "Division: " << myCalculator.divide() << endl;

    // display multiplication
    cout << "Multiplication: " << myCalculator.multiply() << endl;

    return 0;
}

