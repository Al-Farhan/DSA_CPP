#include <iostream>
using namespace std;

void sortZeroAnd(int arr[], int n) {
    int s=0;
    int e=n-1;

    while(s<e) {
        // if(arr[s] == 0 ) {
        //     s++;
        // }
        // if(arr[e] == 1) {
        //     e--;
        // }
        
        // if(arr[s] == 1 && arr[e] == 0) {
        //     swap(arr[s], arr[e]);
        //     s++;
        //     e--;
        // }

        // More precise way
        while(arr[s] == 0 && s<e) {
            s++;
        }

        while(arr[e] ==1 && s<e) {
            e--;
        }

        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void shiftArr(int arr[], int n) {
    int temp = arr[n-1];

    for(int i=n-1; i>=1; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

int main() {

    int arr[] = {0,1,0,1,1,0,1,0};
    int size = 8;
    sortZeroAnd(arr, size);

    // int arr1[] = {10, 20, 30, 40, 50, 60};
    // int size2 = 6;

    // shiftArr(arr1, size2);
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}