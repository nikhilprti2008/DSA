#include<bits/stdc++.h>
using namespace std;


/*Deletion At Paticular Index*/
string DeletionIndex(string &str, int pos){

    //Base Case 
    if(pos < 0 || pos >= str.length()){
        return "Invalid Index";
    }
    for(int  i = pos; i<str.length() - 1; i++){
        str[i] = str[i+1];   
    }
    str.pop_back();

    return str;
}

/* Removing The Substring*/

string RemvingSubString(string &str, int pos, int len){
    if(pos < 0 || len < 0 || pos + len > str.length()){
        return "Invalid Index";
    }

    //Manually shifting and Popping 
    for(int i = pos; i<str.length() - len; i++){
        str[i] = str[i + len];
    }
    /*Function Using 
    str.erase(pos, len)*/

    for(int i = 0; i<len; i++){
        str.pop_back();
    }
    return str;
    
}

//Removing All occurance of Charater
// O(n2)
string RmoveOccurance(string &str, char ch){

    int i = 0;
    while( i < str.length()){
        if(str[i] == ch){
            for(int j = i; j< str.length() -1; j++){  // here we are shifting every element to left
                str[j] = str[j+1];
            }
            str.pop_back();
        }
        else{
            i++;
        }
    }
    return str;
}

// solving occurance in TC O(n)
string RmoveOccurance1(string &str, char ch){

    int j = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] != ch){ // if == then return the All ch Present in the string 
            str[j] = str[i];
            j++;
        }
    }
    str.resize(j);

    return str;
    
}



int main(){
    string str1, str2;
    cout << "Enter the string 1 " << endl;
    cin >> str1;

    // cout << "Enter the string 2 " << endl;
    // cin >> str2;

    char ch;
    cout << "Insert A Character " << endl;
    cin >> ch;

    // int pos, len;
    // cout <<"Enter the Pos to Delete : " << endl;
    // cin >> pos;

    // cout << "Enter the len To delete " << endl;
    // cin >> len;

    // string Result1 = DeletionIndex(str1, 2);
    // cout << Result1 << endl;

    // string Result = RemvingSubString(str1, 2, 3);
    // cout << Result << endl;
    // return 0;

    // string result = RmoveOccurance(str1, ch);
    // cout << result << endl;

    string result1 = RmoveOccurance1(str1, ch);
    cout << result1 << endl;
}