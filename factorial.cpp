#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)  // Base case
        return 1;
    else  // Recursive case
        return n * factorial(n - 1);
}

int main() {
    int n;  // Example value for factorial calculation
    cout<<"Enter a integer number: ";
    cin>>n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
