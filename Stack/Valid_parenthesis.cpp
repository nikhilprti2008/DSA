#include<isotream>
#include<stack>
using namespace std;

bool isvalidparenthesis(string expression){
    stack<char> s;

    for(int i = 0; i<expression.length(); i++){
        char ch = expresssion[i];

        //if opening bracket, stack push
         //if close bracket, stacktop check and pop

        if( ch == '(' || ch == '{' || ch == '[' ){
            s.push(ch);
        } 
    }
}