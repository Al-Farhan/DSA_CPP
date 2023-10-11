#include <iostream>
using namespace std;

int main() {

    int a = 6;
    int *ptr = &a;
    // cout<<ptr<<endl;

    // cout<<"Size of ptr: "<<sizeof(ptr)<<endl;

    // char ch = 'k';
    // char* cptr = &ch;
    // cout<<"Size of char ptr: "<<sizeof(cptr)<<endl;

    // a = a+1;
    // cout<<ptr<<endl;
    // ptr = ptr+1;
    // cout<<a<<endl;
    // cout<<ptr<<endl;

    // cout<<*(&ptr)<<endl;

    // ptr = ptr + 1;
    // cout<<ptr<<endl;

    // int arr[] = {10,20,30,40};
    // arr = arr+1; --> Throws error
    // cout<<sizeof(arr)<<endl;

    char ch = 'a';
    char *cptr = &ch;

    cout<<cptr<<endl;

    return 0;
}