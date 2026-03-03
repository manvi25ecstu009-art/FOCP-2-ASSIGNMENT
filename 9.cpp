#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "It is a number." << endl;
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || 
            lower == 'o' || lower == 'u') {
            cout << "It is a vowel." << endl;
        } else {
            cout << "It is a consonant." << endl;
        }
    }
    else {
        cout << "It is a special character." << endl;
    }
}

