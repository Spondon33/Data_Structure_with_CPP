#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int Arr[size] = {1, 2, 3, 4, 5};

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }

    //Insert at last
    cout << endl;
    Arr[size] = 10;
    size++;
    cout << "After inserting at last: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    //Insert at First
    for (int i = size; i > 0; i--) {
        Arr[i] = Arr[i - 1];
    }
    Arr[0] = 6;
    size++;
    cout << "After inserting at first: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    //Insert at any position
    int pos = 2;
    for (int i = size; i > pos; i--) {
        Arr[i] = Arr[i - 1];
    }
    Arr[pos] = 7;
    size++;
    cout << "After inserting at position " << pos << ": " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
}