#include<iostream>
#include <cctype>
using namespace std;
/*
char tolower(char ch){
    if(ch >='a' && 'z'<=ch){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//checking palindrome
bool checkpalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if( tolower ( a[s] ) != tolower ( a[e] ) ) {
            return 0;
        }
        else{
            s++;
            e--;
    }
    }
    return 1;
}

//reverse the strings 
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++], name[e--]);
    }
}

//getlength of the strings
int getlength( char ch[]){

    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}
/*
int main(){
    char name[20];
    cout << "enter your name : "<<endl;
    cin >> name;
 //  name[2] = '\0';
    cout << "your name is : " << name << endl;
    cout <<"lenght of your string is : " << getlength(name);
return 0;
}*//*
int main(){
    char name[20];
     cout << "enter your name : ";
    cin >> name;

    int len =  getlength(name);

    cout << " string lenght : " << len << endl;
    reverse(name, len);

    cout << "reverse string is : " << name << endl ;


   //Palindrome
   cout << "Is string is palindrome or not : " << checkpalindrome(name, len) << endl;

   //tolower case
   cout << "convert to lower case : " <<  tolower('N') << endl;
    cout << "convert to lower case : " <<  tolower('B') << endl;


   return 0;
}
*/


//strings operation 
int main(){
    string s = "babbar";
    s.push_back('c');
    cout << "add the new character : " << s << endl;
    s.pop_back();
    cout << "delete the character : "<< s;

}