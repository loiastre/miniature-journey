#ifndef VAULT_H
#define VAULT_H

#include <vector>
#include <string>
using namespace std;


class Account
{   
public: 
    string website;
    string username;
    string password;

    Account(string w, string u, string p);
};

class Vault  {
    private:
        vector<Account> accounts;

    public:
        void addAccount();
        void viewAccounts();
        void searchAccount();
        void deleteAccount();
        void saveToFile();
        void loadFromFile();
};

#endif