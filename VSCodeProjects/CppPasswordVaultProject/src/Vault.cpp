#include "Vault.h"
#include <iostream>
#include <fstream>
using namespace std;

Account::Account(string w, string u, string p) {
    website = w;
    username = u;
    password = p;
}

void Vault::addAccount() {

    string website, username, password;

    cout << "Website: ";
    cin >> website;

    cout <<  "Username: ";
    cin >> username;

    cout <<  "Password: ";
    cin >> password;

    accounts.push_back(Account(website, username, password));

    cout  << "Account added successfully.\n";
}

void Vault::viewAccounts() {

    if (accounts.empty())
    {
        cout << "No accounts saved.\n";
        return;
    }
    for (int i = 0; i < accounts.size(); i++)
    {
        cout << "\nAccount " << i + 1 << endl;
        cout << "Website: " << accounts[i].website << endl;
        cout << "Username: " << accounts[i].username << endl;
        cout << "Password: " << accounts[i].password << endl;
    }
    
}

void Vault::searchAccount() {

    string searchWebsite;
    cout << "Enter website to search: ";
    cin >> searchWebsite;

    for (Account acc : accounts)
    {
        if (acc.website == searchWebsite)
        {
            cout << "Website: " << acc.website << endl;
            cout << "Username: " << acc.username << endl;
            cout << "Password: " << acc.password << endl;
            return;
        }
        
    }
    
}

void Vault::deleteAccount(){

    string websiteToDelete;
    cout << "Enter website to delete: ";
    cin >> websiteToDelete;

    for (int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].website == websiteToDelete)
        {
            accounts.erase(accounts.begin() + i);
            cout << "Account deleted.\n";
            return;
        }
    }
    cout << "Account not found.\n";
}
void Vault::saveToFile() {
    ofstream file("account.txt");

    for (Account acc : accounts)
    {
        file << acc.website << " " << acc.username << " " << acc.password << "\n";
    }
    file.close();
}
    
void Vault::loadFromFile() {
    ifstream file("account.txt");

    string website, username, password;

    while (file >> website >> username >> password)
    {
        accounts.push_back(Account(website, username, password));
    }

    file.close();
}