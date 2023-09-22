#include <iostream>
using namespace std;

int getUnique(int arr[], int n) {
    int ans=0; // 0 ko kisi k sath xor karenge to wahi number milta hai
    for(int i=0; i<n; i++) {
        ans = ans^arr[i];
        // cout<<ans<<endl;
    }

    return ans;
}

int main() {

    int arr[] = {12, 15, 12, 7, 15};
    int ans = getUnique(arr, 5);
    cout<<ans<<endl;
    return 0;
}