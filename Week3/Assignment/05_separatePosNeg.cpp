#include <iostream>
using namespace std;

void separatePosNeg(int a[], int n) {
    int s=0;
    int e=n-1;
    while(s<e) {
        if(a[s] < 0) {
            s++;
        }
        else if(a[e] > 0) {
            e--;
        }
        else {
            swap(a[s], a[e]);
        }
    }
}

int main() {

    int a[] = {1,2,-3,4,-5,6};
    int n=6;
    separatePosNeg(a, n);
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}