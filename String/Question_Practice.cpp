#include <bits/stdc++.h>
#include <string>
using namespace std;

char AccessCharacter(const string &str, int index){
    for(int i = 1; i<= (int)str.size(); i++){
        if( i == index){
            return str[i];
        }
    }
    return '\0';
}

int lengthOFString(string &str){
    int cnt = 0;
    int i = 1;
    while(i <= (int)str.size()){

        cnt++;
        i++;
    }
    return cnt;
}

bool isEqual(const string &str, const string str1){
    if(str.size() != str1.size()){
        return false;
    }
     for(int i = 0; i<(int)str.size(); i++){
            if(str[i] != str1[i]){
            return false;
        }
        }
    return true;
}

int main() {

    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second String ";
    cin >> str2;

    // 1. Access character at index
    int index;
    cout << "\nEnter the index: ";
    cin >> index;

    char result =  AccessCharacter(str1, index);

    if(result == NULL){
        cout << "Out of Range " << endl;
    }
    else{
        cout << result << endl;
    }

    // 2. Find string length
    cout << lengthOFString(str1) << endl;




    // 3. Traverse the string
    /*for(int i = 0; i<(int)str.size(); i++){
    cout << str[i] << endl;
    }
    cout << endl;
    */

    

    // 4. Compare two strings
    int NewResult = isEqual(str1, str2);
    if(isEqual == false){
        cout << "Not a equal string " << endl;
    }else{
        cout << "Yes it is equal" << endl;

    } 

    


    return 0;
}