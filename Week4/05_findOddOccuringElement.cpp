#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n) {
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(s==e)
            return s;
        
        // Mid check -> Even or odd
        if(mid & 1) { // Mid odd hai
            if((mid-1)>=0 && arr[mid-1] == arr[mid]) {
                // right me jao
                s = mid+1;
            }
            else {
                // left  me jao
                e = mid-1;
            }
        }
        else {
            if((mid+1)<n && arr[mid] == arr[mid+1]) {
                // right me jao
                s = mid+2; // 1 check ho chuka hai isliye mid+2 kiya hai
            }
            else {
                // ya to mai right part pr khada hu
                // ya to mai answer par hu
                // that's why e=mid kar raha hu
                // q ki e = mid-1; se answer lost ho jayega
                e = mid;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {

    int arr[] = {1,1,5,5,2,2,3,3,2,4,4};
    int n = 11;

    cout<<"Element is: "<<arr[findOddOccuringElement(arr,n)];
    return 0;
}