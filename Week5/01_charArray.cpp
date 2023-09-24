// ASCII VALUE OF NULL CHARACTER IS 0.

#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size) {
    int len = 0;
    for(int i=0; i<size; i++) {
        if(ch[i]=='\0') {
            break;
        }
        else {
            len++;
        }
    }
    return len;
}

void reverseString(char ch[], int size) {
    int s=0;
    int e = size-1;

    while(s<=e) {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}

void convertToUpperCase(char ch[], int n) {
    int index = 0;
    while(ch[index] != '\0') {
        char currCharacter = ch[index];
        // Check if lowercase, then convert to uppercase
        if(currCharacter >='a' && currCharacter<='z') {
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
}

void replaceCharacter(char ch[], int size) {
    int index=0;
    
    while(ch[index] != '\0') {
        char curr = ch[index];

        if(curr == '@') {
            // insert space
            ch[index] = ' ';
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int size) {
    int s=0;
    int e=size-1;

    while(s<=e) {
        if(ch[s] != ch[e]) return false;
        else {
            s++;
            e--;
        }
    }
    return true;
}

int main() {

    string str1 = "Farhani";
    string str2 = "Farhani";

    cout<<str1.substr(2,2)<<endl;

    // if(str1.compare(str2) == 0) {
    //     cout<<"Equal"<<endl;
    // }
    // else {
    //     cout<<"Not Equal"<<endl;
    // }

    // if(str1.find(str2) == string::npos) {
    //     // Not found
    //     cout<<"Not found"<<endl;
    // }
    // else {
    //     cout<<"Found"<<endl;
    // }

    // string str1;
    // string str2 = "Ashfaque";
    // cin>>str1;

    // str1.insert(5, str2);
    // cout<<str1<<endl;

    // str1.erase(4,3); // 4th character se 3 character erase kar do
    // cout<<str1<<endl;

    // string str1;
    // string str2;
    // cin>>str1;
    // cin>>str2;

    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // str1.append(str2);
    // cout<<str1<<endl;



    // cout<<"Length of string: "<<name.length()<<endl;
    // cout<<"String is empty or not: "<<name.empty()<<endl;


    // Strings
    // string name;
    // // cint>>name; --> can't read space, tab
    // getline(cin, name); // read space, tab
    // cout<<name;

    // char ch[100];
    // cin.getline(ch, 100);

    // if(checkPalindrome(ch, strlen(ch))) {
    //     cout<<"Palindrome"<<endl;
    // }
    // else {
    //     cout<<"Not a palindrome"<<endl;
    // }


    // cout<<"Before replace: "<<ch<<endl;
    // replaceCharacter(ch, strlen(ch));
    // cout<<"After replace: "<<ch<<endl;

    // cout<<"Before uppercase: "<<ch<<endl;
    // convertToUpperCase(ch, strlen(ch));
    // cout<<"After uppercase: "<<ch<<endl;

    // cout<<"Before reverse: "<<ch<<endl;
    // reverseString(ch, strlen(ch));
    // cout<<"After reverse: "<<ch<<endl;

    


    // int len = findLength(ch, 100);
    // int len2 = strlen(ch);

    // cout<<"Lenght of character: "<<len<<endl;
    // cout<<"Lenght of character from utility function: "<<len2<<endl;






    // char ch[100];
    // // cin>>ch;

    // // Takes all input
    // cin.getline(ch, 100);

    // cout<<ch<<endl;

    return 0;
}