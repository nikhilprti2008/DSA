#include<bits/stdc++.h>
using namespace std;

void InsertAtBotttom(stack<int> & inputStack, int x){

    //Base Case
    
    if(inputStack.empty()){
        inputStack.push(x);
        return;
    }

    int nums = inputStack.top();
    inputStack.pop();

    InsertAtBotttom(inputStack, x);

    inputStack.push(nums);
}
 // Ye sara element ko remove kar raha haaaaa
void Reverse_Stack(stack<int> &inputStack){

    //Base Case
    if(inputStack.empty()){
        return;
    } 

    int nums = inputStack.top();
    inputStack.pop();

    Reverse_Stack(inputStack);

    InsertAtBotttom(inputStack,nums); // ye har Element ko Bottom ma push kar raha ha



}

int main(){
    

    stack<int> nums;
    nums.push(2);
    nums.push(5);
    nums.push(6);
    nums.push(3);
    nums.push(7);
    nums.push(9);

    int size = nums.size();
    /*Jab call karegae tho 2 top 9 botttom ma 2 top par rahega then 2 ko 
    nikalegae tho first ma ayega jo pahalee bottom ma thaa*/

    Reverse_Stack(nums);
    while(!nums.empty()){
        cout << nums.top() <<" ";
        nums.pop();
    }

    return 0;
}
