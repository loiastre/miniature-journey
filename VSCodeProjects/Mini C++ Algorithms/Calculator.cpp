#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    char op;

    cout << "Enter the expression: ";
    cin >> n1 >> op >> n2;

    double result;

    switch (op) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}