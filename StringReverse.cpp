#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    cout << "Reversed String: " << rev << endl;
    return 0;
}
