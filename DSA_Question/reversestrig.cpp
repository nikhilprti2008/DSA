#include<iostream>
#include<bits/stdc++.h> 

using namespace std;
class solution{
    public:
void reversestring(vector<char>& s){
    reverse(s.begin(),s.end());
}
};
int main(){
    solution obj;
    vector<char> s = {'n','h','h','t','t'};
    obj.reversestring(s);

    for(char c : s){
        cout << c << " ";
    }
    return 0;

}