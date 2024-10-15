#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number between 0 and 1000:\n";
    cin >> num;

    if (num < 0 || num > 1000) {
        cout << "The number must be between 0 and 1000." << endl;
    } else {
        int result = (num % 10) + ((num / 10) % 10) + ((num / 100) % 10);
        cout << "The sum of the digits is " << result << endl;
    }

    return 0;
}
