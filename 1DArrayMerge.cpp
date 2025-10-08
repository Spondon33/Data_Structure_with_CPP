#include <iostream>
using namespace std;

int main(){
    int Arr1[] = {2,4,6,8,10};
    int size1 = sizeof(Arr1) / sizeof(int);

    int Arr2[] = {1,3,5,7,9};
    int size2 = sizeof(Arr2) / sizeof(int);

    cout << "Array 1: " << endl;
    for (int i = 0; i < size1; i++) {
        cout << Arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2: " << endl;
    for (int i = 0; i < size2; i++) {
        cout << Arr2[i] << " ";
    }
    cout << endl;

    int size3 = size1 + size2;
    int Arr3[size3];
    int i = 0, j = 0, k = 0;

    while(i < size1){
        Arr3[k++] = Arr1[i++];
    }
    while(j < size2){
        Arr3[k++] = Arr2[j++];
    }

    cout << "Merged Array: " << endl;
    for (int i = 0; i < size3; i++) {
        cout << Arr3[i] << " ";
    }
    return 0;
}