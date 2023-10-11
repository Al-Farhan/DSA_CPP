#include <iostream>
using namespace std;

void swap(int*x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    // int a[5]= {1,2,3,4,5};
    // int* ptr1 = a;
    // cout<<ptr1[3]<<endl;
    // int (*ptr)[5] = &a;
    // cout<<(*ptr)[3]<<endl;

    // int x = 10;
    // int *ptr = &x;
    // cout<<2**ptr<<endl;
    // cout<<*ptr + 2**ptr-3**ptr<<endl;

    int x=5, y=10, z=15;
    int *arr[] = {&x,&y, &z};
    // cout<<*arr[1]<<endl;

    swap(&x, &y);
    cout<<x<<endl<<y<<endl;



    return 0;
}