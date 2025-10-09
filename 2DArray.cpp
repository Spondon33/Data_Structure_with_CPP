#include <iostream>
using namespace std;

int main(){
    int row = 3;
    int col = 3;
    int Arr[3][3] = {};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "] [" << j << "] : ";
            cin >> Arr[i][j];
        }
        cout << endl;
    }

    cout << "Array: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Transpose Array
    cout << "Transpose Array: " << endl;
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Searching an element
    int search;
    cout << "Enter the element you want to search: " << endl;
    cin >> search;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (Arr[i][j] == search){
                cout << search << " found at index [" << i << "] [" << j << "]";
                return 1;
            }
        }
        cout << endl;
    }
    cout << "Element not found";

    return 0;
}