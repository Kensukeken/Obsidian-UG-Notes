#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    int userWins = 0, computerWins = 0;
    int userChoice;
    bool continuePlaying = true;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    do {
        int computerChoice = rand() % 3; // Generates 0, 1, or 2 for Scissor, Rock, or Paper

        cout << "Scissor (0), Rock (1), Paper (2): ";
        cin >> userChoice;

        // Correct the input to match the choices
        switch (userChoice) {
            case 0:
                cout << "You are Scissor" << endl;
                break;
            case 1:
                cout << "You are Rock" << endl;
                break;
            case 2:
                cout << "You are Paper" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
                continue; // Skip to the next iteration of the loop
        }

        switch (computerChoice) {
            case 0:
                cout << "Computer is Scissor" << endl;
                break;
            case 1:
                cout << "Computer is Rock" << endl;
                break;
            case 2:
                cout << "Computer is Paper" << endl;
                break;
        }

        if (computerChoice == userChoice) {
            cout << "It is a draw." << endl;
        } else if ((userChoice - computerChoice + 3) % 3 == 1) {
            cout << "You won!" << endl;
            userWins++;
        } else {
            cout << "You lost." << endl;
            computerWins++;
        }

        cout << "Score: You (" << userWins << "), Computer (" << computerWins << ")" << endl;

        if (userWins >= computerWins + 2) {
            continuePlaying = false;
        } else if (computerWins >= userWins + 2) {
            continuePlaying = false;
        } else {
            continuePlaying = true;
        }

    } while (continuePlaying);

    if (userWins >= computerWins + 2) {
        cout << "You win the game!" << endl;
    } else if (computerWins >= userWins + 2) {
        cout << "The computer wins the game!" << endl;
    }

    cout << "Final Score: \nYou: " << userWins << " \nComputer: " << computerWins << endl;

    return 0;
}
