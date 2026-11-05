#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout <<"Enter the value of a " << endl;
    cin >> a;

    int b;
    cout <<"Enter the value of b" << endl;
    cin >> b;

    char ch;
    cout << "Enter Any Operation you want to Perform " << endl;
    cin >> ch;

    switch(ch){
        case '+' : cout << (a+b) << endl;
        break;

        case '-' : cout << (a-b) << endl;
        break;

        case '*' : cout << (a*b) << endl;
        break;

        case '/' : cout << (a/b) << endl;
        break;

        case '%' : cout << (a%b) << endl;
        break;

        default : cout << "Enter the Valid option " << endl;
    }
    return 0;
}