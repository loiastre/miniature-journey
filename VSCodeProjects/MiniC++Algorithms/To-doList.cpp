#include <iostream>
#include <vector>
using namespace std;


    void add(vector<string>& ToDoList){
        string NewTask;
        do {
        cout << "Enter a new task (enter 'stop' to interrupt): " << endl;
        cin >> NewTask;

        if (NewTask != "stop") {
            ToDoList.push_back(NewTask);
        }

    } while (NewTask != "stop");
        
    };

    void view(vector<string>& ToDoList){
        for(int i=0; i<ToDoList.size(); i++){
            cout << ToDoList[i] << endl;
        }
        cin.ignore();
        cin.get();
    };





int main(){

    vector<string> ToDoList;
    int input;
    do{
        cout << "Main Menu" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View tasks" << endl;
        cout << "0. Interrupt" << endl << endl;
        
        cout << "Choose the action (0-2):" << endl;
        cin >> input;
        cout << endl << endl;

        switch (input)
        {
        case 1:
            add(ToDoList);
            break;

        case 2:
            view(ToDoList);
            break;
        
        default:
            break;
        }


        system("cls");
    }while(input!=0);

    return 0;
}