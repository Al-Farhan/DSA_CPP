#include<iostream>
using namespace std;

int main() {
    // 1.
    /*
	char c;
    cin>>c;
    if(c>='a' && c<= 'z'){
        cout<<0;
    }
	else if(c>='A' && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
    */

    // 2.
    /*
Pattern
1
23
345
4567
*/

    int n;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
    return 0;
}
