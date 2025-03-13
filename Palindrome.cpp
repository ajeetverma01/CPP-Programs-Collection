#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (num == rev)
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is not a Palindrome." << endl;

    return 0;
}
