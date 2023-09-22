#include <iostream>
using namespace std;

void sortNegPos(int arr[], int n) {
    int j=0;
    for(int index=0; index<n; index++) {
        if(arr[index] > 0) {
            swap(arr[j], arr[index]);
            j++;
        }
    }
}

int main() {

    int arr[] = {-23,-7,45,-5,278,0};
    int size = 6;
    sortNegPos(arr, size);

    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}