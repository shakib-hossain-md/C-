#include <iostream>
using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}
double subtract(double num1, double num2) {
    return num1 - num2;
}
double multiply(double num1, double num2) {
    return num1 * num2;
}
double divide(double num1, double num2) {

    return num1 / num2;
}
int main() {
    double num1, num2;

    cout << "Enter first number except zero: ";
    cin >> num1;
    cout << "Enter second number except zero: ";
    cin >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    return 0;
}

