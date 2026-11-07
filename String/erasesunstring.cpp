#include<iostream>
using namespace std;

string erase(string s, string part){
    while(s.length() !=0 && s.find(part) < s.length()){ // ye index batata ha find starting  jaha sa delete karna ha 
        s.erase(s.find(part), part.length()); //s.erase(strings  , length of the strings to delete)
    }
    return s;
}

int main(){
    string str = "abcabcbbbbccaqbc";
    string part = "abc";
    cout << erase(str, part);
}