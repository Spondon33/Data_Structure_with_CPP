#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter a String: ";
    getline(cin, s);

    cout << "String accessed using array: " << endl;
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }

    cout << endl;
    cout << "Accessing String without using array or loop: " << endl;
    cout << s;

    return 0;
}