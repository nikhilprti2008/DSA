#include<bits/stdc++.h>
using namespace std;
//appending str2 to at end of str1
string AppendString(string str1, string str2){
    int str1Size = str1.length();

    for(int i = 0; i < str2.length(); i++){
        str1.push_back(str2[i]);
    }
    return str1;
}

//appending using the function

string AppendStringFunction(string str1, string str2){
    string ans = str1;
    ans.append(str2);  

    return ans;
}

//Inserting at the given index
string InsertAtPosition(string str1, char ch, int pos){
    
    string ans = "";
    
    for(int i = 0 ; i < pos ; i++){
        ans.push_back(str1[i]);
    }

    ans.push_back(ch);

    for(int i = pos; i< str1.size(); i++){
        ans.push_back(str1[i]);
    }

    return ans;
}

/*Insertion Built in Approach*/

string InsertAtPositionFunction(string str1, char ch, int pos){
    string ans = str1;

    ans.insert(pos,1, ch); // 1 :- How Many time to Insert 

    return ans;
}


int main(){
    string str1, str2;
    cout << "Enter the string 1 " << endl;
    cin >> str1;

    cout << "Enter the string 2 " << endl;
    cin >> str2;

    char ch;
    cout << "Insert A Character " << endl;
    cin >> ch;

    int pos;
    cout <<"Enter the Pos to Insert : " << endl;
    cin >> pos;


/*
    cout << "Appending using Loop :"<< endl;

    cout << AppendString(str1, str2) << endl ;

    cout << "Appending Using Function :" << endl;

    cout << AppendStringFunction(str1, str2);*/

    /*Inserting at particular Position*/
    string result = InsertAtPosition(str1, ch, 5);

    cout << result << endl;

    //Insertion using the Function (Built In)
    cout << InsertAtPositionFunction(str1, ch, 5);





    return 0;
}