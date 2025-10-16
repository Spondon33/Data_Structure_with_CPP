#include <iostream>
using namespace std;

int binarySearch(int arr[], int Esize, int search){
    int left = 1;
    int right =  Esize;

    while(left <= right){
        int mid = (left + right) / 2;
        if (arr[mid] = search){
            return mid;
        }
        else if (arr[mid] < search){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int Esize = 6;
    int search = 3;
    cout << endl;
    int result = binarySearch(arr, Esize, search);
    if (result == -1){
        cout << "Element " << search << " is not found" << endl;
    }
    else{
        cout << "Element " << search << " is found in index " << result << endl;
    }

    return 0;
}