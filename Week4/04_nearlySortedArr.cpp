// Search in nearly sorted array 
// What is nearly sorted array: the element can be present at index mid-1, mid, mid+1

#include <iostream>
using namespace std;

int getIndexNearlySortedArr(int arr[], int n, int target) {
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if((mid-1>=0) && arr[mid-1] == target) {
            return mid-1;
        }
        if(arr[mid] == target) {
            return mid;
        }
        if((mid+1)<=0 && arr[mid+1] == target) {
            return mid+1;
        }

        if(target > arr[mid]) {
            s = mid+2; // already 1 element check kar chuke hai isliye +2 kar rahe hai
        }
        else {
            e = mid-2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}   

int main() {
    int arr[] = {20,10,30,50,40,70,60};
    int n=7;
    int target = 60;

    int targetIndex = getIndexNearlySortedArr(arr, n, target);
    cout<<targetIndex<<endl;
    return 0;
}