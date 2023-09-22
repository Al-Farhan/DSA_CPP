#include <iostream>
using namespace std;

void findMissing(int *a, int n) {
    // for(int i=0; i<n; i++) {
    //     int index = abs(a[i]);
    //     if(a[index-1]>0) {
    //         a[index-1] *= -1;
    //     }
    // }

    

    // All positive are missing
    // for(int i=0; i<n; i++) {
    //     if(a[i] > 0) {
    //         cout<<i+1<<" ";
    //     }
    // }

    // Swap and sorting method
    int i=0;
    while(i<n) {
        int index = a[i]-1;
        if(a[i] != a[index]) {
            swap(a[i], a[index]);
        }
        else {
            i++;
        }
    }

    // Finding missing
    for(int i=0; i<n; i++) {
        if(i+1 != a[i]) {
            cout<<i+1<<" ";
        }
    }

    // for(int i=0; i<n; i++) {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

}

int main() {

    int a[] = {2,1,2,3,5};
    int n=5;
    findMissing(a,n);

    return 0;
}