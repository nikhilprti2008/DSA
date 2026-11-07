#include<iostream>
#include<string>
using namespace std;

char Mosttimecharacter(string s){
    int arr[26] = {0};

    //creatring the array for the count of character 
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = 0;
        if(ch >='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    //find the max occurance 
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    } 
    char finalans = 'a' + ans;
    return finalans;
}

int main(){
    string s = "jfdhgbksjtegjtttttt";
    cout << Mosttimecharacter(s) << endl;
    
}