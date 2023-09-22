#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int row=0; row<n; row++) {
        // Space
        for(int col=0; col<n-row-1; col++) {
            cout<<" ";
        }

        // Star
        for(int col=0; col<2*row+1; col++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}