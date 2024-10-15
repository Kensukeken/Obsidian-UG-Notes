#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie() {
    return rand() % 6 + 1;
}

int roll() {
    int die1 = rollDie();
    int die2 = rollDie();
    int rollSum = die1 + die2;
    cout << "You rolled " << die1 << " + " << die2 << " = " << rollSum << endl;
    return rollSum;
}

int checkResult(int rollSum) {
    switch (rollSum) {
        case 2:
        case 3:
        case 12:
            return 0;
        case 7:
        case 11:
            return 1;
        default:
            return rollSum;
    }
}

void gameResult(int result) {
    if (result == 0) {
        cout << "You lose" << endl;
    } else if (result == 1) {
        cout << "You win" << endl;
    }
}

bool isWin(int result) {
    return result == 1;
}

bool isLose(int result) {
    return result == 0;
}

void keepRolling(int point) {
    int result;
    bool continueRolling = true;

    do {
        result = roll();
        if (result == point || result == 7) {
            continueRolling = false;
        }
    } while (continueRolling);

    if (result == 7) {
        gameResult(0);
    } else {
        gameResult(1);
    }
}

int main() {
    srand(time(0));
    cout << "Welcome to Craps Game!" << endl;
    int rollDice = roll();
    int result = checkResult(rollDice);

    if (isWin(result)) {
        gameResult(1);
    } else if (isLose(result)) {
        gameResult(0);
    } else {
        keepRolling(result);
    }

    return 0;
}
