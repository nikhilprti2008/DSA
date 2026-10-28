#include<iostream>
#include<map>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;

    //precompution
    int hash[26] = {0}; // instead of 26 it can be 256 so that it can conatain the entire value of ASCII 'a' to 'A'
    for(int i = 0; i < s.size(); i++ ){
        hash[s[i] - 'a']++;  
    }

    int q;  
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl; 
    }
    return 0;
}
/*
// mapping in hash

int main(){
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
    cin >> arr[i] ; 
}

//pre compute
//unordered_map<int,int>mpp;  //as a name suggested the output order is different 
map<int,int>mpp;
for(int i = 0; i < n; i++){
    mpp[arr[i]]++;
}
//also iterate in the map

for(auto it : mpp){
    cout << it.first << "->" << it.second << endl; 
}

int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
    //fetch 
    cout << mpp[number] << endl;
}
}*/