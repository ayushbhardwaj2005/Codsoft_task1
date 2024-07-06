#include<iostream>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int n;
    n = (rand() % 100) + 1;
    int guess;
    cout << "Guess a number between 1 and 50: ";
    cin >> guess;
    while (guess != n) {
        if (guess < n && n - guess >= 11) {
            cout << "Too low. Guess again: ";
            cin >> guess;
        }
        else if (guess < n && n - guess <= 10) {
            cout << "You are low but near. Guess again: ";
            cin >> guess;
        }
        else if (guess > n && guess - n > 10) {
            cout << "Too high. Guess again: ";
            cin >> guess;
        }
        else if (guess > n && guess - n <= 10) {
            cout << "You are high but near. Guess again: ";
            cin >> guess;
        }
    }
    cout << "You guessed it!" << endl;
    cout << "The number was: " << n << endl;
    cout << "Thanks for playing!" << endl;
    return 0;
}