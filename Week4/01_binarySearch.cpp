#include <iostream>
using namespace std;

int binarySearch(int arr[],int target, int n) {
    int s=0; 
    int e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<e) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {

    
    return 0;
}