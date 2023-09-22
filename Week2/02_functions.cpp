#include <iostream>
using namespace std;

int maxNum(int a, int b, int c) {
    // if(a>=b && a>=c) {
    //     return a;
    // }
    // else if(b>=a && b>=c) {
    //     return b;
    // }
    // else {
    //     return c;
    // }

    int maxi = max(max(a,b), c);
    return maxi;
}

void printCounting(int n) {
    for(int i=1; i<=n; i++) {
        cout<<i<<endl;
    }
}

void checkEvenOdd(int n) {
    if(n % 2 == 0) {
        cout<<"Even"<<endl;
    }
}

void sumN(int n) {
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    cout<<"Sum is: "<<sum<<endl;
}

void sumEven(int n) {
    int sum=0;
    for(int i=2; i<=n; i=i+2) {
        sum += i;
    }
    cout<<"Sum of even: "<<sum<<endl;
}

void isPrime(int n) {
    for(int i=2; i<=n/2; i++) {
        if(n%i == 0) {
            cout<<"Not a prime number"<<endl;
            return;
        }
    }
    cout<<"Prime number"<<endl;
}

int main() {

    // int max = maxNum(3,3,10);
    // cout<<max<<endl;

    // sumN(10);

    // sumEven(10);

    isPrime(35);

    return 0;
}