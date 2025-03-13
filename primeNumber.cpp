#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2) isPrime = false;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is not a Prime Number." << endl;

    return 0;
}
