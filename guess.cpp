#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Random seed
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number (1 to 100): ";

    do {
        cin >> guess;
        attempts++;
        if (guess > secret)
            cout << "Too high! Try again: ";
        else if (guess < secret)
            cout << "Too low! Try again: ";
        else
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
    } while (guess != secret);

    return 0;
    
}