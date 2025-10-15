#include <iostream>
using namespace std;

int linearSearch(int arr[], int Esize, int search){
    for (int i = 0; i < Esize; i++) {
        if (arr[i] == search){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int Esize = 6;
    int search = 5;

    int result = linearSearch(arr, Esize, search);
    if (result == -1){
        cout << "Element " << search << " is not found" << endl;
    }
    else{
        cout << "Element " << search << " is found at index " << result << endl;
    }

    return 0;
}