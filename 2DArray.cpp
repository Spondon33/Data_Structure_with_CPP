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
}