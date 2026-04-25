#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Error: Cannot compute the square root of a negative number." << endl;
    } else {
        double squareRoot = sqrt(number);
        cout << "The square root of " << number << " is " << squareRoot << endl;
    }

    system("pause");
    return 0;
}