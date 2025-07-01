#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    double calculate() {
        if (operation == "+") {
            return a + b;
        } else if (operation == "subtract" || operation == "-") {
            return a - b;
        } else if (operation == "multiply" || operation == "*") {
            return a * b;
        } else if (operation == "divide" || operation == "/") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (add, subtract, multiply, divide or +, -, *, /): ";
    cin >> op;

    Calculator calc(a, b, op);
    double result = calc.calculate();
    cout << "Result: " << result << endl;
    return 0;
}
