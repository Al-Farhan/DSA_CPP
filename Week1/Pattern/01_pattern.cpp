#include <iostream>
using namespace std;

int main() {

    // Full pyramid
    int n;
    cin>>n;
    /*
    for(int row=0; row<n; row++) {
        // space
        for(int col=0; col<n-row-1; col++) {
            cout<<" ";
        }

        // Star
        for(int col=0; col<row+1; col++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    */

    // Inverted full pyramid
    // for(int row=0; row<n; row++) {
    //     // space
    //     for(int col=0; col<row; col++) {
    //         cout<<" ";
    //     }

    //     // star
    //     for(int col=0; col<n-row; col++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // hollow pyramid
    /*
    for(int row=0; row<n; row++) {
        // space
        for(int col=0; col<n-row-1; col++) {
            cout<<" ";
        }

        // Star
        for(int col=0; col<row+1; col++) {
            if(col == 0 || col==row) {
                cout<<"* ";
                }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    */

    for(int row=0; row<n; row++) {
        // space
        for(int col=0; col<row; col++) {
            cout<<" ";
        }

        // star
        for(int col=0; col<n-row; col++) {

            if(col==0 || col==n-row-1) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }


    return 0;
}