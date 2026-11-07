#include<iostream>
//#include<algorithm> // make the code run slow 

using namespace std;

string reverseword(string str){
    string rev = "";
    int s = 0;
    int e = str.length() - 1;
    
    for(int i = e; i<=0; i--){
        rev += str[i];
    }

    return str;



/*  
   while(s <= e){
   reverse(str.begin(), str.end());
   }
   //(str[s++], str[e--]);

   return str;
*/
}

int main(){
    string word = "love babber code help";
    cout << reverseword(word) <<endl;

}