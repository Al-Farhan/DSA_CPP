#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int>v) {
    int size = v.size();
    for(int i=0; i<size; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

    // Vector -- Array hi hai
    vector<int> v;
    // Push element
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printArr(v);

    // Pop element
    v.pop_back();
    printArr(v);

    v.pop_back();
    printArr(v);

    vector<int> v1;
    cout<<"Size fo v1"<<v1.size()<<endl;;

    // 2D vector
    vector <vector<int>> arr2d;
    vector <vector<int>> arr2d1(5, vector<int>(10,0));
    cout<<"Size of arr2d1 "<<arr2d1.size()<<endl;

    return 0;
}