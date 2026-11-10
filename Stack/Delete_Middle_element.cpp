#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack,int count, int n ){
    //base case
    if(count == n/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, count+1, n);

    inputStack.push(num);
      
}


void deleteMiddleElement(stack<int> &inputStack, int n){

    int count = 0;
    solve(inputStack, count,n);
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

    deleteMiddleElement(nums, size);

    while(!nums.empty()){
        cout << nums.top() <<" ";
        nums.pop();
    }
}