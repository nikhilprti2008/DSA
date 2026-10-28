#include<iostream>
using namespace std;

//calculating power using the recursion

int power(int a , int b){

    //base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    //rec call
    int ans = power(a, b/2); // her step par power half hota jaa raha ha 

    //if even
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
}

int main(){
    int a, b;
    cin >> a ;
    cin >> b;
   int ans = power(a, b);
   cout << ans;
}























/*
//check palindrome using the rec

bool checkpalindrome(string str, int i, int j){
    // base case 
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkpalindrome(str, i+1 , j-1);
    }     
}
int main(){
    string name = "aaaaa";
    bool ans = checkpalindrome(name, 0, name.length()-1);
    
    if(ans){
        cout << "it is palindrome" << endl;
    }
    else{
        cout << "not a palindrome" <<endl;
    }
    
}

*/
/*
// reverse  the string using the recursion
void reverse(string& str, int s, int e){ // if not use the ref operator then it became the pass by val
    cout << "strings : " << str << endl;

    //base case
    if(s>e){
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;

    return reverse(str, s, e);
}

int main(){
    string name = "nikhil";
    reverse(name, 0, name.length()-1);

    cout << endl;
    cout << name;
}*/