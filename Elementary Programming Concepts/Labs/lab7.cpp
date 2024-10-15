#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    int computerChoice = rand() % 3; // Generates a random number between 0 and 2
    int userChoice;

    cout << "Scissor (0), Rock (1), Paper (2): ";
    cin >> userChoice;

    string choices[] = {"scissor", "rock", "paper"};
    cout << "The computer is " << choices[computerChoice] << endl;
    cout << "You are " << choices[userChoice] << endl;

    if (computerChoice == userChoice) {
        cout << "It is a draw." << endl;
    } else if ((userChoice - computerChoice + 3) % 3 == 1) {
        cout << "You won!" << endl;
    } else {
        cout << "You lost." << endl;
    }

    return 0;
}
