#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> myMap = {
        {1, "first"},
        {2, "second"},
        {3, "third"},
        {4, "fourth"},
        {5, "fifth"},
        {6, "sixth"},
        {7, "seventh"},
        {8, "eighth"},
        {9, "ninth"},
        {10, "tenth"}
    };

    cout << "Enter your position (1-10): " << endl;

        int position;
        cin >> position;
    
        if(position >= 1 && position <= 10){
            cout << "Your position is: " << myMap[position] << endl;
        } else {
            cout << "Invalid position!" << endl;
        }
    system("pause");
    return 0;
}