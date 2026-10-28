#include<iostream>
#include <algorithm> // for reverse
using namespace std;



string reverseword(string s){
    int start = 0;

    for(int i = 0; i <= s.length(); i++){
        if(i == s.length() || s[i] == ' '){
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    
    return s;
}

int main(){

    string str = "my name is nikhil";
    cout << reverseword(str) << endl;
    
    return 0;
}