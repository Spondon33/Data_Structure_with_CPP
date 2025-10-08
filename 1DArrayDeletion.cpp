#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int Arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    //Deleting from last
    size--;
    cout << "After deleting the last element: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    //Deleting from first
    for (int i = 0; i < size; i++) {
        Arr[i] = Arr[i + 1];
    }
    size--;
    cout << "After deleting the first element: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    //Deleting from any position
    int pos = 3;
    for (int i = pos; i < size; i++) {
        Arr[i] = Arr[i + 1];
    }
    size--;
    cout << "After deleting from position " << pos << ": " << endl;
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }

    return 0;
}