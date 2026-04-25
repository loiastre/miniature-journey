#include "Vault.h"
#include <iostream>
using namespace std;

int main(){
    Vault vault;
    vault.loadFromFile();

    int choice;

    do
    {
        cout << "\n==== Password  Vault ====\n";
        cout << "1. Add account\n";
        cout << "2. View account\n";
        cout << "3. Search account\n";
        cout << "4. Delete account\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                vault.addAccount();
                break;
            case 2:
                vault.viewAccounts();
                break;
            case 3:
                vault.searchAccount();
                break;
            case 4:
                vault.deleteAccount();
                break;
            case 5:
                vault.saveToFile();
                cout << "Vault saved. Goodbye.\n";
                break;
            
            default:
                cout << "Invalid choice.\n";
                break;
        }
    } while (choice!=5);
    
    return 0;
}