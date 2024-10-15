#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    int headsCount = 0, tailsCount = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 1000000; i++) {
        int flip = rand() % 2; // Generates either 0 (heads) or 1 (tails)
        if (flip == 0) {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    cout << "Number of Heads: " << headsCount << endl;
    cout << "Number of Tails: " << tailsCount << endl;

    return 0;
}
