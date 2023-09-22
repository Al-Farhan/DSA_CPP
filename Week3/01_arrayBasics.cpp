#include <iostream>
#include <limits.h> // --> INT_MIN AND INT_MAX
using namespace std;

void printArr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int findMinNumInArr(int arr[], int size) {
    int minans= INT_MAX;
    for(int i=0; i<size; i++) {
        minans = min(minans, arr[i]);
    }
    return minans;
}

void reverseArr(int arr[], int size) {
    int left = 0;
    int right = size-1;
    while(left<=right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    printArr(arr,size);
}

// Extreme print
void extremePrint(int arr[], int size) {
    int left=0;
    int right = size-1;

    while(left<=right) {
        if(left == right) {
            cout<<arr[left]<<endl;
            left++;
            right--;
        }
        else {
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
            left++;
            right--;
        }
        
    }

    // printArr(arr, size);
}


int main() {

    // cout<<INT_MIN <<endl;

    // int arr[] = {23, 13,7,2,9,1,-23, 100};
    // int size = 8;
    // cout<<findMinNumInArr(arr, size);

    // Reverse and array
    int arr[5] = {10,20,30,40,50};
    int size=5;
    // reverseArr(arr, size);
    extremePrint(arr, size);


    // int arr[5];
    // int n =5;
    // int sum=0;
    // for(int i=0; i<n; i++) {
    //     cout<<"Enter value at index "<<i<<": ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }

    // Double value
    // for(int i=0; i<10; i++) {
    //     arr[i] = arr[i]*2;
    // }

    // // sum
    // for(int i=0; i<n; i++) {
    //     sum += arr[i];
    // }

    // for(int i=0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Sum is: "<<sum<<endl;

    return 0;
}