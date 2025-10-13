#include <iostream>
#include <string>
#include <cstring>
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
    cout << s << endl;

    //String functions
    string str = "Hello";

    cout << "Length of the string: " << str.length() << endl; // using .length()
    cout << "Char at index 1: " << str.at(1) << endl; // using .at()
    cout << "Char at index 2: " << str[2] << endl; // using []

    str.append(" World!"); // appends string
    cout << "Appended Text: " << str << endl;

    str.insert(5, ";"); // inserts ; at index 5
    cout << "After Insertion: " << str << endl;

    str.erase(5,1); // erases 1 char from index 5
    cout << "After erase: " << str << endl;

    cout << str.find("lo") << endl; // finds the index of the substring

    //strcat
    char firstName[50];
    char middleName[50];
    char lastName[50];
    char fullName[200];

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter middle name: ";
    cin >> middleName;
    cout << "Enter last name: ";
    cin >> lastName;

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, middleName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    cout << "Full Name: " << fullName << endl;

    //strconcat
    string first;
    string middle;
    string last;

    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter middle name:";
    cin >> middle;
    cout << "Enter last name: ";
    cin >> last;

    string full = first + " " + middle + " " + last;
    cout << "Full Name: " << full;

    return 0;
}