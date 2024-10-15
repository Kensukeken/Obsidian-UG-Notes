#include <iostream>
#include <string>
using namespace std;

int main() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    int rank, suit;

    cout << "Enter a number between 0 and 12 for rank: ";
    cin >> rank;

    cout << "Enter a number between 0 and 3 for suit: ";
    cin >> suit;

    if (rank >= 0 && rank <= 12) {
        if (suit >= 0 && suit <= 3) {
            cout << "The card you picked is " << ranks[rank] << " of " << suits[suit] << endl;
        } else {
            cout << "Invalid input for suit. Please enter a number between 0 and 3." << endl;
        }
    } else {
        cout << "Invalid input for rank. Please enter a number between 0 and 12." << endl;
    }

    return 0;
}
