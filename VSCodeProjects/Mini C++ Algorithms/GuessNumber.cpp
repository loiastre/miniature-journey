#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int solution = rand() % 100 + 1; // Generate a random number between 1 and 100
    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "Pick a number between 1 and 100: " << endl;
    int guess;
    int attempts = 0;
    do{
        cin >> guess;
        if(guess < solution){
            cout << "Too low! Try again: " << endl;
            attempts++;
        } else if(guess > solution){
            cout << "Too high! Try again: " << endl;
            attempts++;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
    }while(guess != solution);
    system("pause");
    return 0;
}