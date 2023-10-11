#include <iostream>
#include <vector>
#include <algorithm> // For lower and upper bound
using namespace std;

int main() {

    vector<int> v = {1,1,1,2,2,2,2,2,3,3,3};
    auto it = lower_bound(v.begin(), v.end(), 2); // Return and address
    // cout<<it<<endl; // Throws error
    // cout<<*it<<endl;

    // Index of lowerbound
    // cout<<"Index of lowerbound: "<<it-v.begin()<<endl;

    string str = "Farhan";
    cout<<str.find("ar")<<endl; // Find gives index

    cout<<str.substr(str.find("ar"), str.size())<<endl;
    return 0;
}