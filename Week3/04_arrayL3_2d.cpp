#include <iostream>
#include <limits.H>
using namespace std;

// Row wise printing
void printRowArr(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Column vise printing
void printColArr(int arr[][4], int row, int col) {
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

bool findTarget(int arr[][4], int row, int col, int target) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// Row wise sum
void rowSum(int arr[][4], int row, int col) {
    
    for(int i=0; i<row; i++) {
        int sum=0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

// Col wise

void colSum(int arr[][4], int row, int col) {
    
    for(int i=0; i<col; i++) {
        int sum=0;
        for(int j=0; j<row; j++) {
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }
}

// Diagnol sum


// Transpose of matrix
void transpose(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=i; j<col; j++) { // int j=0; --> swaps again the element
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // printColArr(arr,4,4);

    // cout<<"Target: "<<findTarget(arr,4,4,122)<<endl;

    // rowSum(arr, 4,4);

    // colSum(arr,4,4);

    transpose(arr, 4,4);
    printRowArr(arr,4,4);



    return 0;
}