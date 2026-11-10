#include<bits/stdc++.h>
using namespace std;


void SortedInsert(stack<int>& inputStack,int num){
    //Base CAse

    if(inputStack.empty() ||  inputStack.top() <= num){
        inputStack.push(num);
        return;
    }

    num = inputStack.top();
    inputStack.pop();

    //Recursive Call

    SortedInsert(inputStack, num);

    inputStack.push(num);
}


void Sort_Stack(stack<int>& inputStack){
    //Base Case
    if(inputStack.empty()){
        return;
    }

    int nums = inputStack.top();
    inputStack.pop();

    //Recusrive Calling 
    Sort_Stack(inputStack);  // Recusivlly sorted the element into variable by calling Itself

    SortedInsert(inputStack, nums); //Insert each remove element into Stack
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

    Sort_Stack(nums);
      while(!nums.empty()){
        cout << nums.top() <<" ";
        nums.pop();
    }

    return 0;
}